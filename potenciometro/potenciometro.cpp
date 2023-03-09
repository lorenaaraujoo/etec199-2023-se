void setup(){
  pinMode(A5, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if (analogRead(A5) < 350) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  if (analogRead(A5) > 350) {
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  if (analogRead(A5) > 750) {
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  }
  Serial.println(analogRead(A5));
  delay(10); 
