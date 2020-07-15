#define tmp 1000

int cont = 0;
int disp_pinos[8] = {2, 3, 4, 5, 6, 7, 8, 9};
int digitos[10][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0}, //0
  {0, 1, 1, 0, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1, 0}, //2
  {1, 1, 1, 1, 0, 0, 1, 0}, //3
  {0, 1, 1, 0, 0, 1, 1, 0}, //4
  {1, 0, 1, 1, 0, 1, 1, 0}, //5
  {1, 0, 1, 1, 1, 1, 1, 0}, //6
  {1, 1, 1, 0, 0, 0, 0, 0}, //7
  {1, 1, 1, 1, 1, 1, 1, 0}, //8
  {1, 1, 1, 0, 0, 1, 1, 0}, //9
};



void setup()
{
  for (int i=0; i<8; i++){
    pinMode(disp_pinos[i], OUTPUT);
  }
}

void loop(){
  digito(cont);
  delay(tmp);
  cont++;
  if(cont>9)cont=0;
}

void digito(int d){
  for (int i=0; i<8; i++){
    digitalWrite(disp_pinos[i], digitos[d][i]);
  }
}