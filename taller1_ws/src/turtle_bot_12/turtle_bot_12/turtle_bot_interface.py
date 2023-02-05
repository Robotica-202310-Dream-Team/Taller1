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
global pos_x_total_zed2, pos_y_total_zed2
global height, width

#Posicion instantanea del robot (x,y)
pos_x, pos_y = 0, 0
#Variables para acumular todas las posiciones
pos_x_total = [0]
pos_y_total = [0]

def position_callback(msg): # Regresa la posicion del robot
	#pos_x = msg.linear.x
	#pos_y = msg.linear.y
    pass
def pixels (coord,height, width): # Pasar de metros a pixeles 
	#x_len = 500 # metros
	#y_len = 500 # metros
	#x_scale = float(x_len  * width**(-1))
	#y_scale = float(y_len  * height**(-1))
	#x_center = width / 2 - 500/x_scale
	#y_center = height / 2 - 500/y_scale

	#x =  round((coord[0] / x_scale) +  x_center) 
	#y =  round((coord [1] / y_scale ) + y_center)   
	#return [int(x),int(y)]
    pass

def main():
    print('Hi from turtle_bot_12. This node allows us to visualize the real time position of the Turtlebot ')

    mapa_actual = 255*np.ones((500,500,3),dtype=np.uint8) # imagen en blanco
    height,width = mapa_actual.shape
    #rate = rospy.Rate(10) #10hz
	#rospy.Subscriber("turtlebot_position", Twist, position_callback, tcp_nodelay=True) #se suscribe al topico turtle_bot_position
	#img_pub = rospy.Publisher('turtle_bot_image', Image, queue_size=1) #publica al topico turtle_bot_image
	
    while not rclpy.is_shutdown():
        poses_new = pixels((pos_x,pos_y), height, width)
        pos_x_total.append(poses_new[0])
        pos_y_total.append(poses_new[1])
        for i in range(len(pos_y_total_zed2)):
            image = cv2.circle(mapa_actual, (pos_x_total[i],pos_y_total[i]), radius=5, color=(0, 0, 255), thickness=-1) #color=(Blue,Green,Red)
            cv2.imshow('imagen',image)
            cv2.waitKey(1)


        #bridge = CvBridge()
        #try:
        #    image_message = bridge.cv2_to_imgmsg(mapa_actual, encoding= 'passthrough')
        #    img_pub.publish(image_message)
        #except CvBridgeError as e:
        #    print(e)

            	
    


if __name__ == '__main__':
    main()