int CAR_IGNITION = 9;  
int ALCOHOL_SENSOR = 3; 
int BUZZER = 10;
int ALCOHOL_detected;  
int status;
      void setup()  
       {  
         Serial.begin(9600);  
         pinMode(CAR_IGNITION, OUTPUT); 
         pinMode(BUZZER, OUTPUT); 
         pinMode(ALCOHOL_SENSOR, INPUT);  
         Serial.println("Smart Vehicle Alcohol Detection System");
       }  
       void loop(){  
        bool isAlcoholDetected = checkAlcohol();
        if( isAlcoholDetected == 1){
          turnOffCarIgnition();
          turnOnBuzzer();
        }
          if( isAlcoholDetected == 0){
          turnOnCarIgnition();
          turnOffBuzzer();
          
        }
        delay(1000);
       }  

       bool checkAlcohol(){
          status = digitalRead(ALCOHOL_SENSOR);  
          Serial.print("Detecting the presence of alcohol : ");  
         if (status == 1)  
         {  
           Serial.println("Alcohol detected.");  
           return  1;
         }  
         else  
         {  
           Serial.println("No Alcohol detected.");  
           return 0;
         }  
       }

        void turnOnBuzzer(){
          digitalWrite(BUZZER, HIGH);
        }
        void turnOffBuzzer(){
          digitalWrite(BUZZER, LOW);
        }

        void turnOnCarIgnition(){
          digitalWrite(CAR_IGNITION, HIGH);
        }

        void turnOffCarIgnition(){
          digitalWrite(CAR_IGNITION, LOW);
        }
        
    
       