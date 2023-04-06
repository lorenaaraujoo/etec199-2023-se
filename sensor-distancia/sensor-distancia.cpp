
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
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop(){
  Serial.println(0.01723 * readUltrasonicDistance(3, 4));
  if (0.01723 * readUltrasonicDistance(3, 4) < 150) {
    noTone(5);
    delay(1000);
    tone(5, 523, 1000); 
    delay(1000);
    noTone(5);
  }
}