
#include <Servo.h>

int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}

Servo servo_3;

void setup(){
  servo_3.attach(3, 500, 2500);
}

void loop(){
  distancia = 0.01723 * readUltrasonicDistance(10, 13);
  servo_3.write(0);
  if (distancia <= 15) {
    servo_3.write(90);
    delay(1000); 
    servo_3.write(0);
    delay(3000);
  }
}
