int potPin = 3;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  int sersorValue = analogRead(potPin);
  Serial.println(sersorValue, DEC);
  
  sersorValue = sersorValue/4;
  analogWrite(ledPin, sersorValue);
  delay(150);
}
