void setup() {
 pinMode(3,INPUT);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 digitalWrite(13,HIGH);
 Serial.begin(9600);
}

void loop() {
 int a = analogRead(A0);

 if(a<10){
  digitalWrite(12,HIGH);
  Serial.println("GOAl");
  delay(500);
 }
 else{
  digitalWrite(12,LOW);
  Serial.println("Come On");
  delay(500);
 }
}
