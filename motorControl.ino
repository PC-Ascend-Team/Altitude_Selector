/*
Example program showing valid use of the H-bridge motor controllerchip.

to change from proper two motor driving to the weird quad motor driving
change the enable pin to be the same.

this program could be made much more efficiently using iteration and function calls, but I've just written this as a proof of concept.
*/

int leftButton = 2;
int rightButton = 3;
int leftMotorEnable = 8;
int rightMotorEnable = 9;
int leftMotorDrive = 10;
int rightMotorDrive = 11;

void setup() {
	//configure pins
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
  pinMode(leftMotorDrive, OUTPUT);
  pinMode(leftMotorEnable, OUTPUT);
  pinMode(rightMotorDrive, OUTPUT);
  pinMode(rightMotorEnable, OUTPUT);
  //initialize pins to a low state
  digitalWrite(leftMotorEnable, LOW);
  digitalWrite(rightMotorEnable, LOW);
  digitalWrite(leftMotorDrive, LOW);
  digitalWrite(rightMotorDrive, LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.print(F("leftBtn= "));//for left button/motors
  if(digitalRead(leftButton) == LOW){
	  Serial.println("pressed");
	  digitalWrite(leftMotorEnable, HIGH);
	  delay(100);
	  analogWrite(leftMotorDrive, 255);
	//   digitalWrite(leftMotorDrive, HIGH);
  }else{
	  Serial.println("Notpressed");
	  digitalWrite(leftMotorEnable, LOW);
	  delay(100);
	  analogWrite(leftMotorDrive, 0);
	//   digitalWrite(leftMotorDrive, LOW);
  }
  Serial.print(F("rightBtn= "));
  if(digitalRead(rightButton) == LOW){//for right button/motors
	  Serial.println("pressed");
	  digitalWrite(rightMotorEnable, HIGH);
	  delay(100);
	  analogWrite(rightMotorDrive, 255);
	//   digitalWrite(rightMotorDrive, HIGH);
  }else{
	  Serial.println("Notpressed");
	  digitalWrite(rightMotorEnable, LOW);
	  delay(100);
	  analogWrite(rightMotorDrive, 0);
	//   digitalWrite(rightMotorDrive, LOW);
  }
}
