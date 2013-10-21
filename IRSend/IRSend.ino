#include <IRremote.h>
const int buttonPin = 4;
int buttonState = 0;

IRsend irsend;

void setup()
{
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    
    irsend.sendSony(0xA90, 12);
    irsend.sendSony(0xA90, 12);
    irsend.sendSony(0xA90, 12);
  }
}
