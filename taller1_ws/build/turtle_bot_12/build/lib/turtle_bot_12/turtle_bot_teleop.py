import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist

class Turtle_bot_teleop(Node):

    def __init__(self):
        super().__init__('turtle_bot_teleop')
        self.velLineal = input("Ingrese la velocidad lineal: ")
        self.velAngular = input("Ingrese la velocidad angular: ")
        print(self.velLineal)
        print(self.velAngular)
        self.subscription = self.create_subscription(String,'topico_teclas',self.listener_callback,10)
        self.publisher = self.create_publisher(Twist, 'turtlebot_cmdVel', 10)
    

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        mensaje = msg.data
        self.twist = Twist()
        self.twist.linear.y = 0
        self.twist.linear.z = 0
        self.twist.angular.x = 0
        self.twist.angular.y = 0
        if mensaje == 'w':
            self.twist.linear.x = self.velLineal
            self.twist.angular.z = 0
        elif mensaje == 'a':
            self.twist.linear.x = 0
            self.twist.angular.z = -self.velAngular
        elif mensaje == 's':
            self.twist.linear.x = -self.velLineal
            self.twist.angular.z = 0
        elif mensaje == 'd':
            self.twist.linear.x = 0
            self.twist.angular.z = self.velAngular
        else:
            self.twist.linear.x = 0
            self.twist.angular.z = 0
        self.publisher.publish(self.twist)
        


def main(args=None):
    rclpy.init(args=args)
    turtle_bot_teleop = Turtle_bot_teleop()
    rclpy.spin(turtle_bot_teleop)
    Turtle_bot_teleop.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
