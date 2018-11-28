/**
 * Perla Celaya
 * AETEL
 * Curso Arduino para principiantes
 * Version 1.0
 */
 
int led = 9; //pin al que conectaremos el led
int sw = 2; //pin al que se conecta el switch


void setup() {
 // Se inicializan los pines
  pinMode(led,OUTPUT); 
  pinMode(sw,INPUT);  

}

void loop() {

  if( digitalRead(sw) == LOW){ //Como tenemos montada una resistencia de pull-up, el pin 2 leera HIGH cuando NO pulsemos el interruptor y LOW cuando lo pulsemos
    digitalWrite(led,HIGH); // se enciende el led
  }
  else{ 
    digitalWrite(led, LOW); // se apaga el led
  }  

}
