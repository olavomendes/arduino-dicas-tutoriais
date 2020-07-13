// LED conectado ao pino 10
int ledPin = 10;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Acender o LED em 3 traços
  for (int x=0; x<3; x++){
  	digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  
  // Acender o LED em 3 pontos
  for (int x=0; x<3; x++){
  	digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  // Espera 5 segundos para repetir o sinal de SOS
  delay(5000);
}