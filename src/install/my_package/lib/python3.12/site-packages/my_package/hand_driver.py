import rclpy
from example_interfaces.msg import Float32

VERTICAL_PHALANX = 1.5
VERTICAL_THUMP = 1.0
HORIZONTAL = 0

class HandDriver:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot

        self.__ph1 = self.__robot.getDevice('phalanx1')
        
        self.__ph1.setPosition(float('inf'))
        self.__ph1.setVelocity(0)

        self.__target_grade = Float32()

        rclpy.init(args=None)
        self.__node = rclpy.create_node('hand_driver')
        self.__node.create_subscription(Float32, 'cmd_hnd_mov', self.__cmd_hnd_mov_callback, 1)

    def __cmd_hnd_mov_callback(self, grade):
        self.__target_grade = grade

    def step(self):
        
        rclpy.spin_once(self.__node, timeout_sec=0)

        actual_grade = self.__target_grade.data

        #emplear el código para que sea capaz de abrir la mano.
        self.__ph1.setPosition(actual_grade)
        self.__ph1.setVelocity(1.0)
        
