// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  int Switch_State = digitalRead(2);
  if(Switch_State == HIGH){
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
  }
}