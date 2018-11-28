int led1 =9;
int led2 =10;
int led3 =11;
int led4 =6;
int sw = 2;
int brillo =0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(sw,INPUT);
}

void loop() {
  
  analogWrite(led1, brillo);  
  delay(400);                      
  analogWrite(led1, LOW);    
  analogWrite(led2, brillo);    
  delay(400);                    
  analogWrite(led2, LOW);     
  analogWrite(led3, brillo);      
  delay(400);                      
  analogWrite(led3, LOW);      
  analogWrite(led4, brillo);     
  delay(400);                     
  analogWrite(led4, LOW); 

  if(digitalRead(sw)==LOW){    
    brillo = (brillo + 55)%220;   
  }
  

}
