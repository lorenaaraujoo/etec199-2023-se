
int counter;

void setup(){
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  delay(3000); 

  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(3000); 

  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(3000);
  
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(5000); 
  digitalWrite(6, LOW);

  for (counter = 0; counter < 6; ++counter) {
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    delay(500);
  }

  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
}