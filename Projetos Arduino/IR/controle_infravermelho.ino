// BIBLIOTECA PARA CONTROLE INFRAVERMELHOE
#include <IRremote.h>

// PINO DO RECEPTOR IR
#define receptor 11
// PINO DO LED
#define led 2

IRrecv sensorIR(receptor); //INSTÂNCIA UM OBJETO DA CLASSE IRrecv
decode_results resultado; // ARMAZENA O RESULTADOP

void setup(){
  pinMode(led, OUTPUT); // DEFINE O LED COMO SAÍDA
  Serial.begin(9600); // INICIALIZA O MONITOR SERIAL
  sensorIR.enableIRIn(); // HABILITA O SENSOR
}

void loop(){
  if(sensorIR.decode(&resultado)){ // LÊ O BOTÃO PRESSIONADO E MAPEIA PARA A VARIÁVEL RESULTADO
  	Serial.print("Valor: ");
    Serial.println(resultado.value, HEX); // EXIBE O RESULTADO EM HEXADECIMAL
    sensorIR.resume();
    
    // SÊ O BOTÃO PRESSIONADO FOR O DE PLAY, ACENDE O LED
    if (resultado.value = 0xFDA05F){ 
    	digitalWrite(led, HIGH);
    }
  }
}