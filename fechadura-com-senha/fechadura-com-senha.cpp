    #include <Keypad.h>      
    #include <Servo.h>         

    Servo servo_Motor;         
    char* password = "123";    
    int position = 0;          
    const byte ROWS = 4;       
    const byte COLS = 4;       
    char keys[ROWS][COLS] = {  
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
    };

    byte rowPins[ROWS] = { 9, 8, 7, 6 }; 
    byte colPins[COLS] = { 5, 4, 3, 2 }; 

    Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

    int ledVermelho = 12;              
    int ledVerde = 11;                 

    void setup(){
    pinMode(ledVermelho, OUTPUT);    
    pinMode(ledVerde, OUTPUT);       

    servo_Motor.attach(13);          
    setLocked(true);                 
    }

    void loop(){
    char key = keypad.getKey();      
  
    if (key == '*' || key == '#') {  
      position = 0;            
      setLocked(true);            
    }
    if (key == password[position]){    
      position ++;                 
    }

    if (position == 3){                
      setLocked(false);           
    }

    delay(100);                        
    } 

    void setLocked(int locked){        
        if (locked){                        
        digitalWrite(ledVermelho, HIGH); 
        digitalWrite(ledVerde, LOW);     
        servo_Motor.write(0);            
    }   else{                                
        digitalWrite(ledVerde, HIGH);   
        digitalWrite(ledVermelho, LOW);  
        servo_Motor.write(82);          
    }
}