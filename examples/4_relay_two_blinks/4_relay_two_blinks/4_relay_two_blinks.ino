/*
 * Short example that I had used to test the original circuit.
 * It is an edited version of the blink example in the Arduino IDE
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 2 and 3 as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10000);                       // wait for a 5 seconds
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(10000);

  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(5000);                       // wait for a 5 seconds
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(5000);

  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(2500);                       // wait for a 5 seconds
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2500);

  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1250);                       // wait for a 5 seconds
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1250);
}
