#include <Servo.h>

Servo servoMotor;

int servoPin = 11;
int aberturaInicial = 0;
int aberturaFinal = 190;
int intervalo = 15;
const int ledPin = 13;

void setup() {

  servoMotor.attach(servoPin);
  servoMotor.write(aberturaInicial);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  for (int posicao = aberturaInicial; posicao <= aberturaFinal; posicao += intervalo) {
    servoMotor.write(posicao);
    delay(600);
    digitalWrite(ledPin, HIGH);
    delay(400);

    digitalWrite(ledPin, LOW);
    delay(400);
  }

  servoMotor.write(aberturaInicial);
  delay(10000);
}