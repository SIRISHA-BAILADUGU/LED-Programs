void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(10,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(7);
  if(a==1)
  {
    digitalWrite(10,1);
  }
  else 
    {
      digitalWrite(10,0);
  }
  }
