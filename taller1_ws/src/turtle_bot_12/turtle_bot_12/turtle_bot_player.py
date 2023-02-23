import rclpy
import os   
from rclpy.node import Node
from geometry_msgs.msg import Twist
from example_interfaces.srv import SetBool
import time

class Turtle_bot_player(Node):

    def __init__(self):
        super().__init__('turtle_bot_player')
        self.publisher = self.create_publisher(Twist, 'turtlebot_cmdVel', 10)
        self.srv = self.create_service(SetBool, 'read_txt', self.read_txt_callback)
        print('listo')
        self.velLineal = 70.0
        self.velAngular = 80.0
        self.twist = Twist()
        self.twist.linear.y = 0.0
        self.twist.linear.z = 0.0
        self.twist.angular.x = 0.0
        self.twist.angular.y = 0.0

    def read_txt_callback(self, request, response):
        nom = request.mensaje
        print(nom)
        self.dir = os.path.dirname(__file__) 
        ruta = self.dir +'/resource/recorrido.txt'
        archivo = open(ruta, 'r')
        cont = 0
        tamanio = len(archivo.readlines())
        archivo.close()
        archivo = open(ruta, 'r')
        while cont<tamanio:
            linea = archivo.readline().rstrip('\n')
            if linea =='w':
                self.twist.linear.x = self.velLineal
                self.twist.angular.z = 0.0
            elif linea == 'a':
                self.twist.linear.x = 0.0
                self.twist.angular.z = -self.velAngular
            elif linea == 's':
                self.twist.linear.x = -self.velLineal
                self.twist.angular.z = 0.0
            elif linea == 'd':
                self.twist.linear.x = 0.0
                self.twist.angular.z = self.velAngular
            else:
                self.twist.linear.x = 0.0
                self.twist.angular.z = 0.0
            self.publisher.publish(self.twist)
            time.sleep(0.1)
            cont += 1
        self.twist.linear.x = 0.0
        self.twist.angular.z = 0.0
        self.publisher.publish(self.twist)
        response.respuesta = "El robot ha llegado al destino"
        return response



def main(args=None):
    rclpy.init(args=args)
    turtle_bot_player = Turtle_bot_player()
    rclpy.spin(turtle_bot_player)
    turtle_bot_player.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()