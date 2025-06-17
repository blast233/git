#include <ESP32Servo.h>

#define MOTOR_PIN 15 // 定义电机信号引脚接数字引脚2

Servo myservo; // 创建舵机对象

void setup() {
  myservo.attach(MOTOR_PIN); // 将舵机连接到指定引脚
}

void loop() {
    myservo.write(75); //电机正转
    delay(380); //旋转380ms
    myservo.write(94);//电机停止
    delay(5000);//电机停止5s
    myservo.write(113);//电机反转
    delay(380);//反转380ms
    myservo.write(94);//电机停止
    delay(5000);//电机停止5s
}
