/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
Servo myservo; 
Servo myservo1; 
int pos = 0;    

void setup() {
  myservo.attach(9);  
  myservo1.attach(8);
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { 
   
    myservo.write(pos); 
    myservo1.write(pos);             
    delay(5);                      
  }
  for (pos = 90; pos >= 0; pos -= 1) { 
   
    myservo.write(pos);  
    myservo1.write(pos);            
    delay(5);                      
  }
 
}

