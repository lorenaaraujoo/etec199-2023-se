int Ligado = HIGH;

void setup(){
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
}

void loop(){ 
  if (digitalRead(6) == 1) {
    if (Ligado == HIGH){
    	Ligado = LOW;
    } else if(Ligado == LOW){
       Ligado= HIGH;
    };
  };
   digitalWrite(7, Ligado);
}
