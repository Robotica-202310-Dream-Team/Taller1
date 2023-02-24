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
from turtle_bot_srv_12.srv import ReadTxt
import threading
import time
from threading import Thread

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

class Turtle_bot_interface(Node):
    global height, width
    def __init__(self):
        super().__init__('turtle_bot_interface')
        self.pos_x = 0
        self.pos_y = 0
        self.pos_x_total = [0]
        self.pos_y_total = [0]
        self.poses_new  = [0,0]
        #self.publisher_ = self.create_publisher(String, 'turtle_bot_image', 10) Publica un string
        self.publisher_ = self.create_publisher(Image, 'turtle_bot_image', 10) #publica una imagen
        self.cli = self.create_client(ReadTxt, 'read_txt')
        self.subscription = self.create_subscription(Twist,'turtlebot_position',self.subscriber,1)
        self.subscription  # prevent unused variable warning
        self.infoGuardar = self.create_publisher(String, 'info_guardar_txt', 10)

        self.br = CvBridge()
        self.mapa_base =  255*np.ones((500,500),dtype=np.uint8)
        self.req = ReadTxt.Request()
        root = tk.Tk()
        root.title("Turtle_bot_interface Parlington")
        self.canvas = tk.Canvas(master = root,highlightbackground="#351f54", width = 600, height = 600)
        self.t = turtle.RawTurtle(self.canvas)
        self.canvas.pack()
        self.t.pencolor("black")
        self.nick = tk.StringVar()
        tk.Button(master = root, background="#c35bcf" , text = "Iniciar",font="helvetica 10", command = lambda:self.boton1([50,50])).pack(side = tk.LEFT)
        tk.Label(root,background="#c35bcf",  text="Guardar como:",font="helvetica 10").pack(side = tk.LEFT,)
        self.insert_nick = tk.Entry(root, background="#a5e1f2", width=20,  textvariable=self.nick).pack(side = tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Teleop",font="helvetica 10", command=self.boton2).pack(side=tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Replicar recorrido",font="helvetica 10", command=self.boton3).pack(side = tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Funcionalidad 4",font="helvetica 10", command=self.boton4).pack(side = tk.LEFT)
        tk.Button(master = root, background="#c35bcf", text = "Funcioanlidad 5",font="helvetica 10", command=self.boton5).pack(side = tk.LEFT)
        #tk.Label(master = root, text = "Label").pack(side = tk.LEFT)
        #minimal_subscriber_publisher = MinimalPublisher_suscriber()
        print ("minimal_subscriber_publisher")
        #rclpy.spin(minimal_subscriber_publisher)
        #minimal_subscriber_publisher.destroy_node()
        #rclpy.shutdown()
        root.mainloop()
        '''
        thread1 = threading.Thread(target=root.mainloop())
        print ("th1")
        thread2 = threading.Thread(target=rclpy.spin(self))
        print ("th2")
        thread1.start()
        thread2.start()
        thread1.join()
        thread2.join()
        print ("joined")
        '''
        #################################################################################################################################################33
    def send_request(self, txt):
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req.mensaje = txt
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

    def subscriber(self, msg):
        self.pos_x = msg.linear.x
        self.pos_y = msg.linear.y
        print (f"x = {self.pos_x} y = {self.pos_y}")


        #print ("not shutdown")
        self.poses_new = pixels((self.pos_x,self.pos_y),height,width)

        self.pos_x_total.append(self.poses_new[0])
        self.pos_y_total.append(self.poses_new[1])
        
        #for i in range(len(pos_y_total)):
        
        print (f"x = {self.pos_x_total[-1]} y = {self.pos_y_total[-1]}, i= {len(self.pos_x_total)}")
        self.t.goto (self.poses_new[0], self.poses_new[1])
        self.publisher()
                
                
    def publisher(self):
        mapa = cv2.circle(self.mapa_base, (self.pos_x_total[-1],self.pos_y_total[-1]), radius=5, color=(0, 0, 255), thickness=-1) #color=(Blue,Green,Red)
        self.mapa_base = mapa
        self.publisher_.publish(self.br.cv2_to_imgmsg(self.mapa_base))
        #display = Canvas()
        #display.mover(poses_new)
    
    def boton1(self,pose_new):
        #t.forward(1)
        print ("boton1")
        thread = threading.Thread(target=rclpy.spin(self))
        thread.start()
        self.t.pencolor("red")
        self.t.pensize(2)
        
    
    def boton2 (self):
        print ("Boton2")
        scriptDir = filedialog.askdirectory()
        name =self.nick.get()
        ruta = scriptDir + "/"+name
        print (ruta)
        self.canvas.postscript(file=ruta, colormode='color')
        pass
        
    def boton3(self):
        print ("Boton3")
        scriptDir = filedialog.askdirectory()
        name =self.nick.get()
        ruta = scriptDir + "/"+name
        self.req.mensaje = ruta
        response = self.send_request(str(self.req.mensaje))
        print ("respuesta?????")
        self.get_logger().info('Result reading txt: '+ response.respuesta)
        pass

    def boton4(self):
        print ("Boton 4")
        scriptDir = filedialog.askdirectory()
        res =self.nick.get()
        lista = res.split(",")
        respSiNo = lista[0]
        name = lista[1]
        ruta = scriptDir + "/" + name
        msg = String()
        msg.data = (str(respSiNo) + "," + ruta)
        self.infoGuardar.publish(msg)

    def boton5(self):
        print ("funcionalidad 5")
        #cv2.imwrite( ruta,img)



##############################################################################################################################

def pixels (coord,height, width): # Pasar de metros a pixeles 
    x_len = 5 # metros
    y_len = 5 # metros
    #x_center = width//2
    #y_center = height//2
    print (width)
    x =  round((coord[0]*width // x_len ) ) 
    y =  round((coord [1]*height// y_len) )   
    return [int(x),int(y)]
    
def main(args=None):    
    rclpy.init(args=args)
    turtle_bot_interface = Turtle_bot_interface()
    print("turtle_bot_interface")
    
    Turtle_bot_interface.destroy_node()
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()