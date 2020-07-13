// Declaração do pino a ser usado
int ledPin = 10;

void setup()
{
  // Definindo o pino como saída
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin , HIGH);
  delay(1000); // Espera 100 milisegundo(s)
  digitalWrite(ledPin, LOW);
  delay(1000); // Espera 100 milisegundo(s)
}