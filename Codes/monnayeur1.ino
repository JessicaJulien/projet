#include <Servo.h>
Servo servo2;

int i = 0;

void setup() {
  Serial.begin(9600);
  servo2.attach(5);
  servo2.writeMicroseconds(544);
}

void loop() {
  for (i=0 ; i<5 ; i++){ // éjete 5 pièces
    servo2.writeMicroseconds(1700); // 90°
    delay(700);
    servo2.writeMicroseconds(544); // 0°
    delay(700); 
  }
  servo2.detach();
}