const int loudspeaker_pin =13;
const int base_time =16 * 50;
void setup() {
  pinMode(loudspeaker_pin, OUTPUT);
}

void loop() {
  tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 523);
delay(base_time / 2);
tone(loudspeaker_pin, 523);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 392);
delay(base_time / 2);
tone(loudspeaker_pin, 349);
delay(base_time / 2);
tone(loudspeaker_pin, 349);
delay(base_time / 2);
tone(loudspeaker_pin, 349);
delay(base_time / 2);
tone(loudspeaker_pin, 392);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 523);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 523);
delay(base_time / 2);
tone(loudspeaker_pin, 587);
delay(base_time / 2);
tone(loudspeaker_pin, 587);
delay(base_time / 2);
tone(loudspeaker_pin, 523);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 4);


  
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(100);
}


