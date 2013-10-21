const byte LED = 13;
const byte CdS = A0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int val;
  val = analogRead(A0);
  if (val >= 1000 ) {
    digitalWrite(13, HIGH); 
  } else {
    digitalWrite(13, LOW); 
  }
}
