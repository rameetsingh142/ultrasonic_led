
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 11;
const int trigPin2 = 3;
const int echoPin2 = 2;
const int ledPin2 = 4;

// defines variables
long duration;
int distance;
int safetyDistance;
long duration2;
int distance2;
int safetyDistance2;



void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(ledPin, OUTPUT);
pinMode(trigPin2, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin2, INPUT); // Sets the echoPin as an Input
pinMode(ledPin2, OUTPUT);
Serial.begin(9600); // Sta/*-rts the serial communication
}


void loop() {
 
// Clears the trigPin
digitalWrite(trigPin2, LOW);
delay(100);
digitalWrite(trigPin2, LOW);
delay(100);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <=10){

  digitalWrite(ledPin, LOW);
 
}else{
  
  digitalWrite(ledPin, HIGH);
}

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);





}
