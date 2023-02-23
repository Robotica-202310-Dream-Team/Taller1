import cv2
import os 
import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import numpy as np
import turtle
import tkinter as tk
from tkinter import filedialog
from pathlib import Path
import sys
from example_interfaces.srv import SetBool
   
# Este codigo se suscribe al topico con mensaje tipo Twist de posicon
# y grafica en tiempo real la posición del robot en un topico con 
# mensaje tipo Image
global height, width
global poses_new, mapa, mapa_actual

#Posicion instantanea del robot (x,y)

#Variables para acumular todas las posiciones
mapa_actual = 255*np.ones((500,500),dtype=np.uint8) # imagen en blanco
mapa = mapa_actual 
height,width = mapa_actual.shape
########################################################################################################################

class MinimalPublisher_suscriber(Node):
    global height, width
    def __init__(self):
        self.pos_x = 0
        self.pos_y = 0
        self.pos_x_total = [0]
        self.pos_y_total = [0]
        self.poses_new  =    [0,0]
        super().__init__('turtle_bot_interface')
        #self.publisher_ = self.create_publisher(String, 'turtle_bot_image', 10) Publica un string
        self.publisher_ = self.create_publisher(Image, 'turtle_bot_image', 10) #publica una imagen
        self.cli = self.create_client(SetBool, 'read_txt')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
            self.req = SetBool.Request()
        self.subscription = self.create_subscription(
            Twist,
            'turtlebot_position',
            self.subscriber,
            1)
        self.subscription  # prevent unused variable warning
        self.br = CvBridge()
        self.mapa_base =  255*np.ones((500,500),dtype=np.uint8)

    def send_request(self, txt):
        self.req.txt = txt
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

    def subscriber(self, msg):
        self.pos_x = msg.linear.x
        self.pos_y = msg.linear.y
        while True:
            #print ("not shutdown")
            self.poses_new = pixels((self.pos_x,self.pos_y),height,width)
            self.pos_x_total.append(self.poses_new[0])
            self.pos_y_total.append(self.poses_new[1])
            #for i in range(len(pos_y_total)):
            print (f"x = {self.pos_x_total[-1]} y = {self.pos_y_total[-1]}, i= {len(self.pos_x_total)}")
            self.publisher()
                
                
    def publisher(self):
        mapa = cv2.circle(self.mapa_base, (self.pos_x_total[-1],self.pos_y_total[-1]), radius=5, color=(0, 0, 255), thickness=-1) #color=(Blue,Green,Red)
        self.mapa_base = mapa
        self.publisher_.publish(self.br.cv2_to_imgmsg(self.mapa_base))
        #display = Canvas()
        #display.mover(poses_new)
        

#######################################################################################################################       
class Canvas:
    def __init__(self):
        root = tk.Tk()
        root.title("Turtle_bot_interface Parlington")
        self.canvas = tk.Canvas(master = root,highlightbackground="#351f54", width = 600, height = 600)
        self.t = turtle.RawTurtle(self.canvas)
        self.canvas.pack()
        self.t.pencolor("black")
        self.nick = tk.StringVar()
        tk.Button(master = root, background="#c35bcf" , text = "Graficar",font="helvetica 10", command = lambda:self.boton1([50,50])).pack(side = tk.LEFT)
        tk.Label(root,background="#c35bcf",  text="Guardar como:",font="helvetica 10").pack(side = tk.LEFT,)
        self.insert_nick = tk.Entry(root, background="#a5e1f2", width=20,  textvariable=self.nick).pack(side = tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Guardar Imagen",font="helvetica 10", command=self.boton2).pack(side=tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Funcionalidad 3",font="helvetica 10", command=self.boton3).pack(side = tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Funcionalidad 4",font="helvetica 10", command=self.boton4).pack(side = tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Funcioanlidad 5",font="helvetica 10", command=self.boton5).pack(side = tk.LEFT)
        #tk.Label(master = root, text = "Label").pack(side = tk.LEFT)
        #minimal_subscriber_publisher = MinimalPublisher_suscriber()
        print ("minimal_subscriber_publisher")
        #rclpy.spin(minimal_subscriber_publisher)
        #minimal_subscriber_publisher.destroy_node()
        #rclpy.shutdown()
        root.mainloop()

    def boton1(self,pose_new):
        #t.forward(1)
        self.t.pencolor("red")
        self.t.pensize(2)
        self.t.speed(0)
        self.t.goto(pose_new[0],pose_new[1])
    
    def boton2 (self):
        print ("Boton2")
        scriptDir = filedialog.askdirectory()
        name =self.nick.get()
        ruta = scriptDir + "/"+name
        print (ruta)
        self.canvas.postscript(file=ruta, colormode='color')
    def boton3(self):
        print ("funcionalidad 3")
    def boton4(self):
        print ("funcionalidad 4")
    def boton5(self):
        print ("funcionalidad 5")
        #cv2.imwrite( ruta,img)


def main(args=None):
    global display
    rclpy.init(args=args)
    display = Canvas()
    #minimal_subscriber_publisher = MinimalPublisher_suscriber()
    print ("minimal_subscriber_publisher")
    #rclpy.spin(minimal_subscriber_publisher)
    #minimal_subscriber_publisher.destroy_node()
    #rclpy.shutdown()
    

##############################################################################################################################



def pixels (coord,height, width): # Pasar de metros a pixeles 
    x_len = 5 # metros
    y_len = 5 # metros
    x_center = width//2
    y_center = height//2
    x =  round((coord[0]*width // x_len ) +  x_center) 
    y =  round((coord [1]*height// y_len) + y_center)   
    return [int(x),int(y)]
    
def main(args=None):
    global display
    rclpy.init(args=args)
    display = Canvas()
    minimal_subscriber_publisher = MinimalPublisher_suscriber()
    print ("minimal_subscriber_publisher")
    minimal_subscriber_publisher = MinimalPublisher_suscriber()
    response = minimal_subscriber_publisher.send_request(str(sys.argv[1]))
    minimal_subscriber_publisher.get_logger().info('Result reading txt: '+(str(sys.argv[1]), response.respuesta))
    rclpy.spin(minimal_subscriber_publisher)
    minimal_subscriber_publisher.destroy_node()
    rclpy.shutdown()




if __name__ == '__main__':
    main()