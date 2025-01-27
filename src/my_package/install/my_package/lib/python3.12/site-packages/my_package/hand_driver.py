import rclpy
from geometry_msgs.msg import Twist

VERTICAL_PHALANX = 1.5
VERTICAL_THUMP = 1.0
HORIZONTAL = 0

class HandDriver:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot
        phalanx = {"phalanx1", "phalanx2", "phalanx3"
                   "phalanx4", "phalanx5", "phalanx6"
                   "phalanx7", "phalanx8", "phalanx9",
                   "phalanx10", "phalanx11", "phalanx12"}

        for i in range (0, 12):
            self.__ph[i] = self.__robot.GetDevice(phalanx[i])
            self.__ph[i].setPosition(float('inf'))
            self.__ph[i].setVelocity(0)

        self.__target_twist = Twist()

        rclpy.init(args = None)
        self.__node = rclpy.create_node('hand_driver')
        self.__node.create_subscription(Twist, 'hnd-mov', self.__cmd_hnd_mov_callback, 1)

    def __cmd_hnd_mov_callback(self, twist):
        self.__target_twist = twist

    def step(self):
        
        rclpy.spin_once(self.__node, timeout_sec=0)

        #emplear el código para que sea capaz de abrir la mano.
