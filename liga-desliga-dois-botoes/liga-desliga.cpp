void setup(){
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
  if (digitalRead(6) == 1) {
    digitalWrite(7, HIGH);
  }
  if (digitalRead(3) == 1) {
    digitalWrite(7, LOW);
  }
  delay(10); 
}
