#include <Servo.h>

Servo myServo;               // Cria um objeto Servo para controlar o motor

const int potPin = A0;       // Pino analógico conectado ao potenciômetro
int potVal;                  // Armazena o valor do potenciômetro (0–1023)
int angle;                   // Ângulo mapeado para o servo (0–179 graus)

void setup() {
  myServo.attach(9);         // Conecta o servo ao pino digital 9
  Serial.begin(9600);        // Inicia o monitor serial
}

void loop() {
  potVal = analogRead(potPin);  // Lê o valor do potenciômetro
  Serial.print("potVal: ");     // Exibe o valor lido
  Serial.print(potVal);

  angle = map(potVal, 0, 1023, 0, 179); // Converte o valor lido em ângulo
  Serial.print(", angle: ");
  Serial.println(angle);

  myServo.write(angle);       // Move o servo para o ângulo desejado
  delay(15);                  // Pequena pausa para estabilizar o movimento
}
