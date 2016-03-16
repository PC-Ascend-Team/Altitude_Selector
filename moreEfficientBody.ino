int leftButton = 2;//button for left motor
int rightButton = 3;//button for right motor

int leftMotorEnable = 8;
int rightMotorEnable = 9;

int leftMotorHighDrive = 10;//pin 1A on motor controller chip
int leftMotorLowDrive = 7;//pin 2A, the other signal in pin on the same side of the chip.

int rightMotorHighDrive = 11;//ditto...
int rightMotorLowDrive = 6;

//declaration of a motor drive function defined underneath the main loop. Here to resolve scope
void driveMotor(int enablePin, int fwdPin, int revPin, bool driveVal);

void setup(){
    pinMode(leftButton, INPUT);//obviously
    pinMode(rightButton, INPUT);
    for(int i = 6; i < 12; i++){//though this doesn't use the variable names, it still tells the hardware the right thing
        pinMode(i, OUTPUT);//initialize pins to output
        digitalWrite(i, LOW);//start pin off at 0V
    }
    Serial.begin(9600);
    Serial.println("finished initializing...");//tell me you're finished starting up.
}//**NOTE this startup routine is waaaay faster than the others. The first test branch took something like 5 sec to start

void loop(){
    bool leftState = digitalRead(leftButton);//store the button state as one state or another. This uses less memory than using int, literally 1 bit
    bool rightState = digitalRead(rightButton);//I used pull up resistors, so remember HIGH means NOT pressed, LOW means pressed

    //the loop basically just always runs this function right after a quick button check.
    driveMotor(leftMotorEnable, leftMotorHighDrive, leftMotorLowDrive, !leftState);
    driveMotor(rightMotorEnable, rightMotorHighDrive, rightMotorLowDrive, !rightState);
}

//Basically just makes sure the reverse pin in always LOW (0V), and drive the fwdPin
//whatever the driveVal is. so if button is pressed, and you feed in an affirmative that it's pressed
//it drives high. Just be careful with the value inverting from pull up resistors.
void driveMotor(int enablePin, int fwdPin, int revPin, bool driveVal){
    digitalWrite(enablePin, driveVal);
    digitalWrite(revPin, LOW);
    digitalWrite(fwdPin, driveVal);
}
