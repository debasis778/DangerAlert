//program s 
int pirPin = 2; 
int pirPin2=4;//the digital pin connected to the PIR sensor's 
int rpin1=8;
int rpin2=11;
int wpin1=9;
int wpin2=12;
//int buzzer=6;
//SETUP
void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  digitalWrite(pirPin, LOW);
  pinMode(pirPin2, INPUT);
  digitalWrite(pirPin2, LOW);
//  pinMode(buzzer,OUTPUT);
 //digitalWrite(buzzer,LOW);
    }
//LOOP
void loop(){

     /*if(digitalRead(pirPin) == HIGH && digitalRead(pirPin2) == HIGH){
         delay(1000);       
         Serial.println(" Vechile Detected");u4
         Serial.println("Red Signal");
         
       }
       else
       {
        delay(500);
        Serial.println("Green Signal");
        
       }*/
      // digitalWrite(buzzer,HIGH);
      
      // Serial.println("buzzer enter!!");
       if(digitalRead(pirPin) == HIGH || digitalRead(pirPin2) == HIGH){
        //if two vechiles comes at opposite side
         if(digitalRead(pirPin) == HIGH && digitalRead(pirPin2) == HIGH){
         delay(1000);
        // digitalWrite(buzzer,HIGH);       
         Serial.println(" Vechile Detected");
         Serial.println("Red Signal");
         //light
         digitalWrite(rpin1,HIGH);
         digitalWrite(rpin2,HIGH);
         digitalWrite(wpin1,LOW);
         digitalWrite(wpin2,LOW);
       }
      
         else if(digitalRead(pirPin) == HIGH && digitalRead(pirPin2) == LOW)
          //if pirpin is high
          {
            digitalWrite(rpin1,LOW);
            digitalWrite(rpin2,HIGH);
            
            digitalWrite(wpin1,HIGH);
            digitalWrite(wpin2,HIGH);
            //delay(1000);
            // digitalWrite(wpin2,LOW);
            
            
                
            Serial.println("Warning!Slow DOwn");
            Serial.println("side 1 Light On!!!");
          }
        else if(digitalRead(pirPin2) == HIGH && digitalRead(pirPin) == LOW)
          {//if pirpin 2 is high
            digitalWrite(rpin1,HIGH);
            digitalWrite(rpin2,LOW);
            digitalWrite(wpin1,HIGH);
            //delay(1000);
            //digitalWrite(wpin1,LOW);
            digitalWrite(wpin2,HIGH);
            //delay(500);
                
            Serial.println("Warning!Slow DOwn");
            Serial.println("Side 2 Light on!!!");
          }
          
        
         
       }
       else
       {
        delay(1000);
        Serial.println("Green Signal");
        
       }


     
  }
