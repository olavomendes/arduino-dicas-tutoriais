#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

// Define um símbolo de caveira
byte caveira[8]={
  B01110,B10001,B10001,B11011,B10001,B10001,B01010,B01110
};
// Define um símbolo de bateria baixa
byte bateriaBaixa[8]={
  B01110,B10001,B10001,B10001,B10001,B10001,B10001,B11111
};


void setup(){
  lcd.begin(16, 2);
  // Atribui a caveira ao número 1
  lcd.createChar(1, caveira);
  // Atribui a bateria ao número 2
  lcd.createChar(2, bateriaBaixa);
}


void loop(){
  lcd.clear();
  // Escreve o caractere 1 (caveira) na tela
  lcd.write(1);
  lcd.setCursor(15, 0);
  lcd.write(2);
  delay(3000);
}