
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

void setup(){
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){
  distancia = 0.01723 * readUltrasonicDistance(10, 11);
  if (distancia <= 50) {
    digitalWrite(13, HIGH);
    digitalWrite(5, HIGH);
    delay(1000); 
    digitalWrite(5, LOW);
    delay(1000); 
  } else {
    digitalWrite(13, LOW);
    digitalWrite(5, LOW);
  }
}