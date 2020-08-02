int LED = 12; // Pino do LED
int sensorPin = 2; // Pino do sensor de movimento

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(sensorPin, INPUT_PULLUP);
  
  // Tempo para o sensor tirar um "snapshot" do ambiente
  delay(3000);
}

void loop()
{
  // Se o sensor detectar movimento (HIGH), começa
  // a piscar o LED
  if (digitalRead(sensorPin) == HIGH){
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
}