#include "pitches.h"

int medloy[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
  
int medloy_x[] = {
  NOTE_C5, NOTE_F5};
int duration = 500; //500 ms

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly: 
  for (int thisNote = 0; thisNote < 2; thisNote ++) {
    tone(8, medloy_x[thisNote], duration);
    
    delay(800);
  }  
  delay(200);
}
