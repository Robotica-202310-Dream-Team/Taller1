import cv2
import os 
import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import numpy as np

# Este codigo se suscribe al topico con mensaje tipo Twist de posicon
# y grafica en tiempo real la posición del robot en un topico con 
# mensaje tipo Image

global pos_x, pos_y
global pos_x_total, pos_y_total
global height, width

#Posicion instantanea del robot (x,y)
pos_x, pos_y = 0, 0
#Variables para acumular todas las posiciones
pos_x_total = [0]
pos_y_total = [0]
mapa_actual = 255*np.ones((500,500),dtype=np.uint8) # imagen en blanco
height,width = mapa_actual.shape
########################################################################################################################

class MinimalPublisher_suscriber(Node):
    def __init__(self):
        super().__init__('turtle_bot_interface')
        self.publisher_ = self.create_publisher(String, 'turtle_bot_image', 10)
        timer_period = 0.5  # seconds
        self.subscription = self.create_subscription(
            Twist,
            'turtlebot_position',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def listener_callback(self, msg):
        pos_x = msg.linear.x
        pos_y = msg.linear.y
        while True:
            print ("not shutdown")
            poses_new = pixels((pos_x,pos_y), height, width)
            pos_x_total.append(poses_new[0])
            pos_y_total.append(poses_new[1])
            for i in range(len(pos_y_total)):
                print (f"x = {pos_x_total[i]} y = {pos_y_total[i]}")
                
                #image = cv2.circle(mapa_actual, (pos_x_total[i],pos_y_total[i]), radius=5, color=(0, 0, 255), thickness=-1) #color=(Blue,Green,Red)
                #cv2.imshow('imagen',image)
                #cv2.waitKey(1)


    def timer_callback(self):
        msg = String()
        msg.data = 'X = ' + str(pos_x) +'Y = ' + str(pos_y)  % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

        
class MinimalSubscriber(Node):
    global pos_x, pos_y
    global pos_x_total, pos_y_total
    global height, width

    def __init__(self):
        self.subscription = self.create_subscription(
            Twist,
            'turtlebot_position',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        
        

    def listener_callback(self, msg):
        pos_x = msg.linear.x
        pos_y = msg.linear.y
        while True:
            print ("not shutdown")
            poses_new = pixels((pos_x,pos_y), height, width)
            pos_x_total.append(poses_new[0])
            pos_y_total.append(poses_new[1])
            for i in range(len(pos_y_total)):
                print (f"x = {pos_x_total[i]} y = {pos_y_total[i]}")
                #minimal_publisher = MinimalPublisher()
                #image = cv2.circle(mapa_actual, (pos_x_total[i],pos_y_total[i]), radius=5, color=(0, 0, 255), thickness=-1) #color=(Blue,Green,Red)
                #cv2.imshow('imagen',image)
                #cv2.waitKey(1)

#######################################################################################################################       

def pixels (coord,height, width): # Pasar de metros a pixeles 
    x_len = 5 # metros
    y_len = 5 # metros
    x_center = width//2
    y_center = height//2
    x =  round((coord[0]*width // x_len ) +  x_center) 
    y =  round((coord [1]*height// y_len) + y_center)   
    return [int(x),int(y)]
    
def main(args=None):
    print('Hi from turtle_bot_12. This node allows us to visualize the real time position of the Turtlebot ')
    rclpy.init(args=args)
    minimal_subscriber_publisher = MinimalPublisher_suscriber()
    print ("minimal_subscriber_publisher")
    rclpy.spin(minimal_subscriber_publisher)
    minimal_subscriber_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()