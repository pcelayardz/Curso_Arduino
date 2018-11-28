int led1 =9;
int led2 =10;
int led3 =11;
int led4 =6;
int sw = 2;
int t = 80;
int cont=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(sw,INPUT);
}

void loop() {
  
  digitalWrite(led1, HIGH);   
  delay(t);                      
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
  delay(t);                     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);     
  delay(t);                      
  digitalWrite(led3, LOW);      
  digitalWrite(led4, HIGH);     
  delay(t);                   
  digitalWrite(led4, LOW); 

  if(digitalRead(sw) == LOW){
   cont=(cont+1)%3;
  }

  if(cont==0){
    t=80;
  } else if (cont==1){
    t=200;
  }else if (cont==2){
    t=400;
  }

}
