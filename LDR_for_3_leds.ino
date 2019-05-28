 const int ledpin = D1;
 const int ledpin1 = D2;
 const int ledpin2 = D3;
 const int ldrPin = A0;  
void setup() {  
    Serial.begin(9600);  
    pinMode(D1, OUTPUT); 
    pinMode(D2, OUTPUT); 
    pinMode(D3, OUTPUT);  
}  
void loop() {  
    int ldrStatus = analogRead(A0);   
    if (ldrStatus <= 400)  {  
        digitalWrite(D1, HIGH);  
        Serial.println("LDR is DARK, LED and BUZZER is ON");
        digitalWrite(D2, LOW); //turn LED off  
        Serial.println("---------------"); 
        digitalWrite(D3, LOW); //turn LED off  
        Serial.println("---------------");   
    }  
     else if(ldrStatus >400 && ldrStatus <=800){
    digitalWrite(D1, LOW);  
        digitalWrite(D2, HIGH); //turn LED ON
        Serial.println("---------------"); 
        digitalWrite(D3, LOW); //turn LED off  
        Serial.println("---------------");  
}

 else if(ldrStatus >800 && ldrStatus <=1200){
         digitalWrite(D1, LOW);  
        digitalWrite(D2, LOW); //turn LED off  
        Serial.println("---------------"); 
        digitalWrite(D3, HIGH); //turn LED ON
        Serial.println("---------------");
 }
}
 
