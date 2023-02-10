from time import sleep
import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
from pynput import keyboard
from std_msgs.msg import String
from geometry_msgs.msg import Twist

class Turtle_bot_teleop(Node):

    # -----------------------------------------------------INIT--------------------------------------------------------------


    def __init__(self):
        super().__init__('turtle_bot_teleop')
        self.velLineal = float(input("Ingrese la velocidad lineal: "))
        self.velAngular = float(input("Ingrese la velocidad angular: "))
        self.frec = 10
        self.publisher = self.create_publisher(Twist, 'turtlebot_cmdVel', self.frec)
        self.twist = Twist()
        self.twist.linear.y = 0.0
        self.twist.linear.z = 0.0
        self.twist.angular.x = 0.0
        self.twist.angular.y = 0.0
        listener = keyboard.Listener(on_press=self.on_press, on_release=self.on_release)
        listener.start()

        self.RECORRIDO = '/home/robotica/Documents/Taller1/taller1_ws/src/turtle_bot_12/resource/recorrido.txt'
        self.archivo = open(self.RECORRIDO,"w")
        self.decision = False
        self.tiempoInicialLetraEspichada = 0
        self.tiempoFinalLetraEspichada = 0
        self.tiempoInicialLetraNoEspichada = self.get_clock().now().to_msg().sec
        self.tiempoFinalLetraNoEspichada = 0
        self.diferencia = 0 
        
         

    # -----------------------------------------------------KEYBOARD THREAD--------------------------------------------------------------

    def on_press(self,key):
        try:
            print('alphanumeric key {0} pressed'.format(key.char))
            if key.char == 'w' or key.char == 's' or key.char == 'a' or key.char == 'd':
                self.archivo = open(self.RECORRIDO,"a")
                self.tiempoFinalLetraNoEspichada = self.get_clock().now().to_msg().sec
                self.diferenciaLetraNoEspichada = abs(self.tiempoInicialLetraNoEspichada - self.tiempoFinalLetraNoEspichada)
                #for i in range(0, self.frec*self.diferenciaLetraNoEspichada):
                self.archivo.write("k" + "\n")
                self.tiempoInicialLetraEspichada = self.get_clock().now().to_msg().sec
            if key.char =='w':
                self.twist.linear.x = self.velLineal
                self.twist.angular.z = 0.0
            elif key.char == 'a':
                self.twist.linear.x = 0.0
                self.twist.angular.z = -self.velAngular
            elif key.char == 's':
                self.twist.linear.x = -self.velLineal
                self.twist.angular.z = 0.0
            elif key.char == 'd':
                self.twist.linear.x = 0.0
                self.twist.angular.z = self.velAngular
            self.publisher.publish(self.twist)
        except AttributeError:
            print('special key {0} pressed'.format(key))
            self.twist.linear.x = 0.0
            self.twist.angular.z = 0.0
            self.publisher.publish(self.twist)


    def on_release(self,key):
        try:
            if key.char == 'w' or key.char == 's' or key.char == 'a' or key.char == 'd':
                self.archivo = open(self.RECORRIDO,"a")
                self.tiempoFinalLetraEspichada = self.get_clock().now().to_msg().sec
                self.diferenciaLetraEspichada = abs(self.tiempoInicialLetraEspichada - self.tiempoFinalLetraEspichada)
                #for i in range(0, self.frec*int(self.diferenciaLetraEspichada)):
                self.archivo.write(key.char + "\n")
                print("ABC")
                self.tiempoInicialLetraNoEspichada = self.get_clock().now().to_msg().sec
                self.archivo.close()
            print('{0} released'.format(key))
            self.twist.linear.x = 0.0
            self.twist.angular.z = 0.0
            self.publisher.publish(self.twist)
            if key == keyboard.Key.esc:
                return False
        except AttributeError:
            if key == keyboard.Key.esc:
                return False
    

# --------------------------------------------------------MAIN-----------------------------------------------------------

def main(args=None):
    rclpy.init(args=args)
    turtle_bot_teleop = Turtle_bot_teleop()
    rclpy.spin(turtle_bot_teleop)
    Turtle_bot_teleop.destroy_node()
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()
