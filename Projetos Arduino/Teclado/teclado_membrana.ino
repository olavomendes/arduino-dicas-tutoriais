char mapaTeclas[4][3] = {
  {'1', '2', '4'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

void setup(){
  // Pinos das linhas - 6, 7, 8, 9
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  // Pinos das colunas - 10, 11, 12
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop(){
  for (int porta=6; porta<10; porta++){
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(porta, LOW);
    
    if (digitalRead(10) == LOW){
      // função aqui
      imprimir(porta-6, 0);
      while(digitalRead(10) == LOW){}
    }
    
    if (digitalRead(11) == LOW){
      // função aqui
      imprimir(porta-6, 1);
      while(digitalRead(11) == LOW){}
    }
    
    if (digitalRead(12) == LOW){
      // função aqui
      imprimir(porta-6, 2);
      while(digitalRead(12) == LOW){}
    }
  }
}

void imprimir(int x, int y){
  Serial.print(mapaTeclas[x][y]);
  
  delay(10);
}