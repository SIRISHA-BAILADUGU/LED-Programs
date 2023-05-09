void setup() {
 pinMode(6,INPUT);
  pinMode(12,OUTPUT);
  pinMode(8,INPUT);
  pinMode(13,OUTPUT);
  pinMode(0,OUTPUT);
}

void loop() {
  int a=digitalRead(6);
  if(a==1)
  {
    digitalWrite(12,1);
  }
  else
  {
    digitalWrite(12,0);
  }
int b=digitalRead(8);
  if(b==1)
  {
    digitalWrite(13,1);
  }
  else
  {
    digitalWrite(13,0);
  }
  if(a==1&&b==1)
  {
    digitalWrite(0,1);
  }
  else{
    digitalWrite(0,0);
  }
}
  
