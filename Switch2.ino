/*
 * Perla Celaya
 * AETEL
 * Curso Arduino para principiantes 
 * Version 1.0
 */
int led = 9; //pin al que conectaremos el led
int entrada = 2; //pin al que conectaremos la resistencia de pull-up
int estado=HIGH; 

void setup() {

  pinMode(led,OUTPUT);
  pinMode(entrada,INPUT); 
  digitalWrite(led,HIGH); // Ponemos que el led este siempre encendido, lo apagaremos mas adelante

}

void loop() {
  
  if( digitalRead(entrada) == LOW){ // si el interruptor esta pulsado entra en el if
   if(estado==HIGH){ //si el estado estaba en high ( al inicio si esta en high porque lo declaramos asi) cambia el estado a low
    estado=LOW;
   }else{ // si el esatdo esta en low lo cambia a high
    estado=HIGH;
   }
  }

  digitalWrite(led,estado); // el led se enciende o se apaga segun el estado

}
