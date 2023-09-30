
double ch6=3;
double ch5=6;
void setup() {
  // put your setup code here, to run once:

pinMode(9,OUTPUT);

pinMode(10,OUTPUT);
pinMode(3,INPUT);
pinMode(5,OUTPUT);
pinMode(6,INPUT);
pinMode(4,OUTPUT);

Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

ch6 = pulseIn(3,HIGH);
ch5 = pulseIn(6,HIGH);
Serial.print(ch6);
Serial.print("    ");
Serial.println(ch5);
if(ch6>1700){
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
else if (ch6<1400){
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
}
else{
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);

}
if(ch5<1400){
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
else if (ch5>1700){
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
}
else{
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);

}
}
