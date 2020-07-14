#include <LiquidCrystal.h>


LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


void setup(){
  lcd.begin(16, 2);
  lcd.clear();
}

void loop(){
  lcd.setCursor(2, 0);
  lcd.print("Meu deus");
  lcd.setCursor(2, 1);
  lcd.print("que tristeza");
  delay(1000);
  
  for (int pos=0; pos<2; pos++){
    lcd.scrollDisplayLeft();
    delay(1000);
  }
  for (int pos=0; pos<2; pos++){
    lcd.scrollDisplayRight();
    delay(1000);
  }
}