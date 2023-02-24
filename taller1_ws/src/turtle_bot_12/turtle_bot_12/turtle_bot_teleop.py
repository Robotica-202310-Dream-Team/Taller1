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
        self.infoGuardar = self.create_subscription(String, 'info_guardar_txt', self.listener_info_txt, self.frec)
        self.twist = Twist()
        self.twist.linear.y = 0.0
        self.twist.linear.z = 0.0
        self.twist.angular.x = 0.0
        self.twist.angular.y = 0.0
        listener = keyboard.Listener(on_press=self.on_press, on_release=self.on_release)
        listener.start()

        self.pathTXT = '/home/sebastian/Uniandes202310/Robotica/Taller1/taller1_ws/src/turtle_bot_12/resource/recorrido.txt'
        self.archivo = open(self.pathTXT,"w")
        self.guardar = True
        self.decision = False
        self.tiempoInicialLetraNoEspichada = self.get_clock().now().to_msg().sec
        self.tiempoFinalLetraNoEspichada = 0
        self.diferencia = 0 
        self.termino = True
        
        

    # -----------------------------------------------------KEYBOARD THREAD--------------------------------------------------------------

    def on_press(self,key):
        try:    
            self.archivo = open(self.pathTXT,"a")
            if self.termino == False:
                self.tiempoFinalLetraNoEspichada = self.get_clock().now().to_msg().sec
                self.diferenciaLetraNoEspichada = abs(self.tiempoInicialLetraNoEspichada - self.tiempoFinalLetraNoEspichada)
                self.termino = True
                self.archivo.write(("k" + "\n")*(self.diferenciaLetraNoEspichada*self.frec))
            if key.char == 'w' or key.char == 's' or key.char == 'a' or key.char == 'd':
                if self.guardar == True:
                    self.archivo.write(key.char + "\n")
            print('alphanumeric key {0} pressed'.format(key.char))
            if key.char =='w':
                self.twist.linear.x = self.velLineal
                self.twist.angular.z = 0.0
            elif key.char == 'a':
                self.twist.linear.x = 0.0
                self.twist.angular.z = self.velAngular
            elif key.char == 's':
                self.twist.linear.x = -self.velLineal
                self.twist.angular.z = 0.0
            elif key.char == 'd':
                self.twist.linear.x = 0.0
                self.twist.angular.z = -self.velAngular
            self.publisher.publish(self.twist)
        except AttributeError:
            try:
                print('special key {0} pressed'.format(key))
                self.twist.linear.x = 0.0
                self.twist.angular.z = 0.0
                if key.char =='w':
                    self.twist.linear.x = self.velLineal
                    self.twist.angular.z = 0.0
                elif key.char == 'a':
                    self.twist.linear.x = 0.0
                    self.twist.angular.z = self.velAngular
                elif key.char == 's':
                    self.twist.linear.x = -self.velLineal
                    self.twist.angular.z = 0.0
                elif key.char == 'd':
                    self.twist.linear.x = 0.0
                    self.twist.angular.z = -self.velAngular
                self.publisher.publish(self.twist)
            except: 
                pass


    def on_release(self,key):
        try:
            self.termino = False        
            self.tiempoInicialLetraNoEspichada = self.get_clock().now().to_msg().sec       
            print('{0} released'.format(key))
            self.twist.linear.x = 0.0
            self.twist.angular.z = 0.0
            self.publisher.publish(self.twist)
            self.archivo.close()
            if key == keyboard.Key.esc:
                return False
        except AttributeError:
            if key == keyboard.Key.esc:
                return False
    

        
    def listener_info_txt(self, msg):
        mensaje = str(msg.data)
        lista = mensaje.split(",")
        if lista[0] == "si":
            self.guardar = True
            self.pathTXT = lista[1]
            self.archivo = open(self.pathTXT,"w")
            self.archivo.write(str(self.velLineal) + "," + str(self.velAngular) + "\n")



        

# --------------------------------------------------------MAIN-----------------------------------------------------------



def main(args=None):
    rclpy.init(args=args)
    turtle_bot_teleop = Turtle_bot_teleop()
    rclpy.spin(turtle_bot_teleop)
    Turtle_bot_teleop.destroy_node()
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()