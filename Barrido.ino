int led1 =7;
int led2 =8;
int led3 =9;
int led4 =10;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  
  digitalWrite(led1, HIGH);   
  delay(200);                      
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
  delay(200);                     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);     
  delay(200);                      
  digitalWrite(led3, LOW);      
  digitalWrite(led4, HIGH);     
  delay(200);                   
  digitalWrite(led4, LOW); 

}
