#include <dht11.h>


//global varaibles
dht11 DHT;
int MQpin = A0;
int DHTpin = 8;
int lpg, co, smoke;
int buzzer = 4;
int window = 5;
int door = 6;
int active = HIGH;
int inactive = LOW;
int smokeThreshold = 300;

void setup(){
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(window,OUTPUT);
  pinMode(door,OUTPUT);
  pinMode(DHTpin, OUTPUT);
  
}





void loop()

{

  float smokeValues= analogRead(A0); 
  
  Serial.println(smokeValues);

  delay(100);

 if (Serial.available()>0)
 {
   //Read serial input
   int value = Serial.read();

   if (value == '1')
   {
     digitalWrite(window,active);
   }

   else if (value == '2')
   {
     digitalWrite(window,inactive);
   }

   else if (value == '3')
   {
     digitalWrite(door,active);
   }

   else if (value == '4')
   {
     digitalWrite(door,inactive);
   }

 
 }

  if (smokeValues > smokeThreshold)
  {
    digitalWrite(window,active);
    digitalWrite(door,active);
    digitalWrite(buzzer,active);
  }

  delay(1000);

  
}

