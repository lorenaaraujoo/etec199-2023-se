#include <Servo.h>

Servo servo_2;

void setup(){
  pinMode(A0, INPUT);
  Serial.begin(9600);
  servo_2.attach(2, 500, 2500);
}

void loop(){
  Serial.println(analogRead(A0));
  servo_2.write(map(analogRead(A0), 0, 1023, 0, 180));
  delay(10); 
}