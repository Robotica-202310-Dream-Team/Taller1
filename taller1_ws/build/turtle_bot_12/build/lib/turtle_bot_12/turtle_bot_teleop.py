import rclpy
from rclpy.node import Node

from pynput import keyboard
from std_msgs.msg import String
from geometry_msgs.msg import Twist

class Turtle_bot_teleop(Node):

    # -----------------------------------------------------INIT--------------------------------------------------------------


    def __init__(self):
        super().__init__('turtle_bot_teleop')
        self.velLineal = float(input("Ingrese la velocidad lineal: "))
        self.velAngular = float(input("Ingrese la velocidad angular: "))
        self.publisher = self.create_publisher(Twist, 'turtlebot_cmdVel', 10)
        self.twist = Twist()
        self.twist.linear.y = 0.0
        self.twist.linear.z = 0.0
        self.twist.angular.x = 0.0
        self.twist.angular.y = 0.0
        listener = keyboard.Listener(on_press=self.on_press, on_release=self.on_release)
        listener.start()
    

    # -----------------------------------------------------KEYBOARD THREAD--------------------------------------------------------------

    def on_press(self,key):
        try:
            print('alphanumeric key {0} pressed'.format(key.char))
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
        print('{0} released'.format(key))
        self.twist.linear.x = 0.0
        self.twist.angular.z = 0.0
        self.publisher.publish(self.twist)
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
