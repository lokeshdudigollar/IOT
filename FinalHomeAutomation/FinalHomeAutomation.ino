int a=8;
int b=9;
int c=10;
int d=11;
int e=12;
int f=13;
int g=6;
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  for(int i=2; i<9;i++)
  {
    digitalWrite(i,HIGH);
  
  delay(600);
}
}



