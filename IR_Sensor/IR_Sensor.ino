const int input = 4;
const int led = 13;


void setup() {
  // put your setup code here, to run once:
pinMode(input,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(input));
 if (digitalRead(input) == 0 )
 {
  digitalWrite(led,HIGH);
 }
 if (digitalRead(input) == 1)
 {
  digitalWrite(led,LOW);
 }
}
