
 int LD = 2; // time in melliseond to wait before make another reading.

void setup() {
    Serial.begin(9600);
    // out pins
    pinMode(10, OUTPUT);// connected to relay
         

    // input pins
    pinMode(2, INPUT);// reed switch  input pin 2  


    Serial.println("Robojax Test: Reed switch");

}

void loop() {

    // read the REED switch
    if(digitalRead(2)){
      Serial.println("Switch ON "); 
      digitalWrite(10, LOW); // Turn the relay ON    
      delay(LD); 
    }else{
      delay(5);// wait 5 seconds before turning the alarm
        // remove this line if you don't want any delay
      digitalWrite(10, HIGH);// Turn the relay OFF
      
    }    }
  
