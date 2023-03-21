const int led[8]={5,6,7,8,9,10,11,12};
int t=500;
int r=200;
void setup() {
 for (int i=0;i<8;i++){
  pinMode(led[i],OUTPUT);
 }
}

void loop() {
  //flashing lEDs
  for(int i=0;i<8;i++){
    digitalWrite(led[i],HIGH);
    
  }
    delay(r);
   for(int i=0;i<8;i++){
    digitalWrite(led[i],LOW);
    
  }delay(t);
  
  //ping pong
  
  for(int i=0; i<8;i++){
    for(int j=0; j<8; j++){
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(r);
  }
   for(int i=8; i>0;i--){
    for(int j=0; j<8; j++){
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(r);
  }
  delay(t);

  //shift right
  for(int i=0;i<8;i++){
    digitalWrite(led[i],HIGH);
    delay(50);
    digitalWrite(led[i],LOW);
    delay(50);
  }
  
  delay(t);
  
  //shift left
  for(int i=0;i<8;i++){
    digitalWrite(led[7-i],HIGH);
    delay(50);
    digitalWrite(led[7-i],LOW);
    delay(50);
  }
  
  delay(t);

  //converging & diverging
  for (int i=0;i<8; i++){
    digitalWrite(led[i],HIGH);
    digitalWrite(led[i+1],HIGH);
    digitalWrite(led[7-i],HIGH);
    digitalWrite(led[7-i-1],HIGH);
    delay(r);
     digitalWrite(led[i],LOW);
    digitalWrite(led[i+1],LOW);
    digitalWrite(led[7-i],LOW);
    digitalWrite(led[7-i-1],LOW);
    delay(r);
    }
    
   //snake
    for (int i=0;i<8;i++){
      digitalWrite(led[i],HIGH);
       delay (r);
      }
      delay(t);

     //turnin off all LEDs
     for (int i=0;i<8;i++){
      digitalWrite(led[i],LOW);
      }
      delay(t);
  
  
 

    
   
  


}
