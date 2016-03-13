//Code created by Jake Denison
//Version 1.3
//PC NASA ASCEND TEAM
//##########################################################
//PR: good place to check general c++ code is to use codepad.org for 
//whether or not your program flow works like if checks or switch cases.

//##########################################################
//initialize all the pins for the motors.
//PR:this area is just creating variable names to refer to integers. Pin initialization to input/out happens in the pinmode
  int pwmPin = 11; //pwm pin
  int motor1Pin = 3; //first motor
  int motor2Pin = 4; //second motor
  int motor3Pin = 5; //third motor
  int motor4Pin = 6; //fourth motor
  int motor5Pin = 7; //fifth motor
  int motor6Pin = 8; //sixth motor
  int motor7Pin = 9; //seventh motor
  int motor8Pin = 10; //eighth motor
  int motor9Pin = 12; //nineth motor
  int motor10Pin = 13; //tenth motor
  int alt = 10; //altitude
  int driveTime = 10000; //motor run time
  int sampCount = 0; //amount of samples collected
    
void setup(){
  
//set output pins
  pinMode(pwmPin, OUTPUT);
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(motor3Pin, OUTPUT);
  pinMode(motor4Pin, OUTPUT);
  pinMode(motor5Pin, OUTPUT);
  pinMode(motor6Pin, OUTPUT);
  pinMode(motor7Pin, OUTPUT);
  pinMode(motor8Pin, OUTPUT);
  pinMode(motor9Pin, OUTPUT);
  pinMode(motor10Pin, OUTPUT);
  /*PR:could be shortened. This will use the pinmode function to initialize 
  every pin you're using as an output from 3 to 13 (13 < 14). You can still 
  use motor5Pin to do a digitalWrite though because motor5Pin is just the integer 7.
  for(int i = 3; i < 14; i++ ){// set pins 3 - 13 to output
    pinMode(i, OUTPUT);
  }
  }
  */

}

void loop() {
//when desired altitude is reached, trigger proper motor.
/*PR:
  your code here is saying if (alt == 'a'){
                              if(alt == 10 ){
                                //operate  
                              }
                            }
  I think you mean
  switch(alt){
    case 10:// checks if alt == 10
      //stuff 
      break;
    case 20:
      //other stuff
      break;
  }
*/

switch (alt){
    case 'a':
     if (alt = 10){
      digitalWrite(motor1Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor1Pin, LOW);
      sampCount + 1;
     } 
      break;
    case 'b':
     if (alt = 20){
       //PR: look up how to declare functions in C++/Arduino (they're the same thing, my data extracter is a good example)
       // so that you can replace the  repeated digitalWrites and drive with just a function call. (saves program space)
      digitalWrite(motor2Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor2Pin, LOW);
      sampCount + 1;
     }
      break;
    case 'c':
     if (alt = 30){
      digitalWrite(motor3Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor3Pin, LOW);
      sampCount + 1;
     }
      break;
    case 'd':
     if (alt = 40){
      digitalWrite(motor4Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor4Pin, LOW);
      sampCount + 1;
     }
      break;
     case 'e':
     if (alt = 50){
      digitalWrite(motor5Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor5Pin, LOW);
      sampCount + 1;
     }
      break;
     case 'f':
     if (alt = 60){
      digitalWrite(motor6Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor6Pin, LOW);
      sampCount + 1;
     }
      break;
     case 'g':
     if (alt = 70){
      digitalWrite(motor7Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor7Pin, LOW);
      sampCount + 1;
     }
      break;
     case 'h':
     if (alt = 80){
      digitalWrite(motor8Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor8Pin, LOW);
      sampCount + 1;
     }
      break;
     case 'i':
     if (alt = 90){
      digitalWrite(motor9Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor9Pin, LOW);
      sampCount + 1;
     }
      break;
     case 'j':
     if (alt = 10){
      digitalWrite(motor10Pin, HIGH);
      delay(driveTime);
      digitalWrite(motor10Pin, LOW);
      sampCount + 1;
     }
      break;
    default: 
     if (alt == 10);
      
    break;
  }

} 
