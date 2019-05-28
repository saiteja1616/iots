int S = D5;
int L = D1;
int A;

void setup() {// put your setup code here, to run once:
pinMode(L,OUTPUT);
pinMode(S,INPUT);

}

void loop(){  // put your main code here, to run repeatedly:
A = digitalRead(S);
if( S == LOW){
  digitalWrite(L,HIGH);
}
else
{
  digitalWrite(L,LOW);                   
}

}
