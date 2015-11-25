/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
Servo myservo;  
int pos = 0;    

void setup() {
  myservo.attach(9);  
}

void loop() {
  for (pos = 0; pos <= 360; pos += 1) { 
   
    myservo.write(pos);              
    delay(5);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
   
    myservo.write(pos);              
    delay(5);                      
  }
  for (pos = 0; pos <= 720; pos += 1) { 
   
    myservo.write(pos);              
    delay(15);                      
  }
  for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}

