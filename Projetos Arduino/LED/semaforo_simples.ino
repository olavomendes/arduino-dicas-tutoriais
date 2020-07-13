//criando as variáveis que serão usadas no "delay" 
// e nos pinos do Arduino

int ledDelay = 1000;
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup()
{
  // Definindo os pinos 10, 9 e 8 como saída
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  // Ligando LED vermelho
  digitalWrite(redPin, HIGH);
  delay(ledDelay);
  
  // Ligando LED amarelo
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  // Ligando LED verde, desligando o vermelho e o amarelo
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  delay(ledDelay);

  // Ligando o LED amarelo e desligando o verde
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(2000);
  
  // Desligando o amarelo
  digitalWrite(yellowPin, LOW);
}