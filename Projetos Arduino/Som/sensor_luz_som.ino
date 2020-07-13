int piezoPin = 8;
int ldrPin = 0;
int ldrValue = 0; //Valor lido pelo LDR

void setup(){
	//Nada
}

void loop(){
  ldrValue = analogRead(ldrPin); // Lendo o valor do LDR
  tone(piezoPin, 1000); // Tocando um tom de 1000Hz
  delay(25); // Esperando 25ms
  noTone(piezoPin); // Interrompendo o som
  delay(ldrValue); // Esperando...
}