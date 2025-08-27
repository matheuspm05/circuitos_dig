int switchState = 0; // variable to store the state of the switch

void setup() {
  // Configure the pins
  pinMode(3, OUTPUT); // green LED
  pinMode(4, OUTPUT); // red LED 1
  pinMode(5, OUTPUT); // red LED 2
  pinMode(2, INPUT);  // switch
}

void loop() {
  // Read the switch
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // Button is not pressed
    digitalWrite(3, HIGH); // green LED ON
    digitalWrite(4, LOW);  // red LED 1 OFF
    digitalWrite(5, LOW);  // red LED 2 OFF
  } else {
    // Button is pressed
    digitalWrite(3, LOW);  // green LED OFF

    digitalWrite(4, LOW);  // red LED 1 OFF
    digitalWrite(5, HIGH); // red LED 2 ON
    delay(250);            // wait

    digitalWrite(4, HIGH); // red LED 1 ON
    digitalWrite(5, LOW);  // red LED 2 OFF
    delay(250);            // wait
  }
}
