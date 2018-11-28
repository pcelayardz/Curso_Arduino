/*
 * Perla Celaya
 * AETEL
 * Curso Arduino para principiantes 
 * Version 1.0
 */
int led = 7; //pin al que conectaremos el led
int entrada = 2; //pin al que conectaremos la resistencia de pull-up
int estado=HIGH; 
long time =0; // variable en la que se guardara el ultimo tiempo en el que se ha hecho toggle 
long debounce = 200; // tiempo prudente a esperar para el rebote

void setup() {

  pinMode(led,OUTPUT);
  pinMode(entrada,INPUT); 
  digitalWrite(led,HIGH); // Ponemos que el led este siempre encendido, lo apagaremos mas adelante

}

void loop() {
  
  if( digitalRead(entrada) == LOW && millis() - time > debounce){ // si el interruptor esta pulsado entra en el if
   if(estado==HIGH){ //si el estado estaba en high ( al inicio si esta en high porque lo declaramos asi) cambia el estado a low
    estado=LOW;
   }else{ // si el esatdo esta en low lo cambia a high
    estado=HIGH;
   }
   time=millis();
  }

  digitalWrite(led,estado); // el led se enciende o se apaga segun el estado

}

/*
 * NOTA
 * se usa long para la variable time y debounce porque el tiempo puede medir mas de lo que puede ocupar en un int
 * la funcion millis() retorna el tiempo que ha pasado desde que se ha ejecutado el programa, nosotros lo usamos para ir comparando el tiempo con debounce
 */
