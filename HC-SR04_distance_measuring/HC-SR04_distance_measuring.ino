


const int trigPin = 2;
const int echoPin = 3;
long duration ;
int distanceCm;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(2);
 digitalWrite(trigPin,LOW);

 duration = pulseIn(echoPin,HIGH);
 distanceCm = duration*0.034/2;
 Serial.println(distanceCm);
}
