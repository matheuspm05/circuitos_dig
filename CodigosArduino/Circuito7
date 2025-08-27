const int greenLEDPin = 9;
const int redLEDPin = 11;
const int blueLEDPin = 10;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // Read sensor values
  redSensorValue = analogRead(redSensorPin);
  delay(5);  // Short delay helps stabilize readings
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  delay(5);

  // Print raw values
  Serial.print("Raw Sensor Values\tRed: ");
  Serial.print(redSensorValue);
  Serial.print("\tGreen: ");
  Serial.print(greenSensorValue);
  Serial.print("\tBlue: ");
  Serial.println(blueSensorValue);

  // Map values to 0-255 for PWM
  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  // Print mapped values
  Serial.print("Mapped Sensor Values\tRed: ");
  Serial.print(redValue);
  Serial.print("\tGreen: ");
  Serial.print(greenValue);
  Serial.print("\tBlue: ");
  Serial.println(blueValue);

  // Set LED colors using PWM
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);

  delay(100);  // Short pause before next reading
}
