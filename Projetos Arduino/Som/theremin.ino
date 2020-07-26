#define LDR A0 // pino do LDR
#define buzzer 11 // pino do buzzer

int leitura = 0; // armazena o valor lido pelo ADC
int nota = 0; // armazena a frequência da nota a ser reproduzida


void setup() {
  pinMode(LDR, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  leitura = analogRead(LDR); // lê o LDR

  // converte o valor lido pelo LDR em um valor entre 1000 a 6000
  nota = map(leitura, 0, 1023, 1000, 6000);

  // toca a nota
  tone(buzzer, nota);
}