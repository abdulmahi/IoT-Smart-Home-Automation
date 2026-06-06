#include <Ethernet.h>
#include <NewPing.h>

const int buzzer = 12;
const int ledPin = 13;

NewPing sonar (10, 11);

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:

  int distance = sonar.ping_cm();
  
  Serial.println(distance);
  delay(50);

  if (distance <= 30 && distance > 1) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(distance*5);
  }
  else {

    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);
    delay(distance*5);
  }
}
