#include <Servo.h>

Servo servo1; // Cria um objeto servo
Servo servo2; // Cria outro objeto servo
int pot1, pot2; // Potenciômetros

void setup(){
  servo1.attach(5); // Anexa o servo do pino 5 ao objeto servo
  servo2.attach(6); // Anexa o servo do pino 5 ao objeto servo
  
  servo1.write(90); // Coloca o servo1 na posição inicial (90º)
  servo2.write(90); // Coloca o servo2 na posição inicial (90º)
}

void loop(){
  pot1 = analogRead(3); //Lê o pot1
  pot2 = analogRead(4); //Lê o pot1
  pot1 = map(pot1, 0, 1023, 0, 180); // Converte os valores para ângulos (até 180º)
  pot2 = map(pot2, 0, 1023, 0, 180);
  
  servo1.write(pot1); // Escreve o ângulo
  servo2.write(pot2);
  
  delay(15); // Espera 15 milisegundos
}