#include <micro_ros_arduino.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/float32.h>

//Atributes of publisher
rcl_publisher_t publisher;
std_msgs__msg__Float32 msg;
rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;

//Sensor EMG
int emgPin = A6;
int emgValue = 0;
int values[10];
int cont = 0;

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

void grade_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if(timer != NULL){
    rcl_publish(&publisher, &msg, NULL);
    emgValue = analogRead(emgPin);
    cont++;
    if(cont == 10)
      cont = 0;
    values[cont] = emgValue;
    int total = 0;
    for(int i = 0; i < 10; i++){
      total += values[i]; 
    }
    float media = (float) total/10;
    media = media / 450;

    if(media > 1.5)
      msg.data = 0;   
    else
      msg.data = 1.5 - media;
  }
}


void setup() {  
  Serial.begin(9600);
  set_microros_transports();

  delay(2000);

  allocator = rcl_get_default_allocator();

  rclc_support_init(&support, 0, NULL, &allocator);

  //create node
  rclc_node_init_default(&node, "esp_hand", "", &support);

  //create publisher
  rclc_publisher_init_default(&publisher, &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32),
    "cmd_hnd_mov");

  //create the timer
  const unsigned int timer_timeout = 1000;
  rclc_timer_init_default(&timer, &support,
   RCL_MS_TO_NS(timer_timeout), grade_callback);
   
  //create executor
  rclc_executor_init(&executor, &support.context, 1, &allocator);
  rclc_executor_add_timer(&executor, &timer);
  
  msg.data = 0.0;

}

void loop() {
  
  delay(100);
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
}
