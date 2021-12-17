/*
 * Short example that I had used blink my christmas lights
 */

 int count = 1;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 2 and 3 as an output.
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (count == 1)
  {
    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, HIGH);
    delay(5000);                       // wait for a 5 seconds
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, LOW);
    delay(5000);                       // wait for a 5 seconds
    count = random(1, 3);
  } else if(count == 2)
  {
    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, LOW);
    delay(10000);                       // wait for a 10 seconds
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);
    delay(10000);                       // wait for a 10 seconds

    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, LOW);
    delay(5000);                       // wait for a 5 seconds
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);
    delay(5000);                       // wait for a  5 seconds

    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, LOW);
    delay(2500);                       // wait for a 2.5 seconds
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);
    delay(2500);                       // wait for a  2.5 seconds
    count = random(1, 3);
  } else if(count == 3)
  {
    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, HIGH);
    delay(5000);                       // wait for a 5 seconds
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, LOW);
    delay(5000);                       // wait for a 5 seconds

    digitalWrite(2, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(5, LOW);
    delay(5000);                       // wait for a 5 seconds
    
    digitalWrite(5, HIGH);
    delay(5000);                       // wait for a 5 seconds

    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, LOW);
    delay(2500);                       // wait for a 2.5 seconds

    digitalWrite(2, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);
    delay(10000);                       // wait for a 10 seconds
    count = random(1, 3);
  }
}
