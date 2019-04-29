#define trigPin 13
#define echoPin 12
#define motor 7
#define buzzer 6
void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(motor, OUTPUT);
pinMode(buzzer,OUTPUT);
}
void loop()
{
long duration, distance;
digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance < 70)// This is where checking the distanceyou can change the value
{ 
digitalWrite(motor,LOW); // When the the distance below 100cm
digitalWrite(buzzer,LOW);
} else
{
digitalWrite(motor,HIGH);// when greater than 100cm
digitalWrite(buzzer,HIGH); 
} delay(500);
}
