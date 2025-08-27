const int sensorPin = A0;               // Analog pin where the temperature sensor is connected
const float baselineTemp = 20.0;        // Baseline temperature for LED logic

void setup() {
  Serial.begin(9600);                   // Start serial communication

  // Set pins 2, 3, and 4 as output for LEDs and turn them off
  for (int pinNumber = 2; pinNumber < 5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  int sensorVal = analogRead(sensorPin);   // Read value from temperature sensor
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  // Convert sensor reading to voltage
  float voltage = (sensorVal / 1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage);

  // Convert voltage to temperature in Celsius
  float temperature = (voltage - 0.5) * 100;
  Serial.print(", degrees C: ");
  Serial.println(temperature);

  // Control LEDs based on temperature ranges
  if (temperature < baselineTemp) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemp + 2 && temperature < baselineTemp + 4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemp + 4 && temperature < baselineTemp + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemp + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

  delay(1000);  // Wait 1 second before reading again
}
