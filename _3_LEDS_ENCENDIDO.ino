int LED1=8; //LED pin 8
int LED2=9; //LED pin 9
int LED3=10; //LED pin 10


///////configuración 
void setup() 
{
 pinMode(LED1,OUTPUT); //LED como salida
 pinMode(LED2,OUTPUT); //LED como salida
 pinMode(LED3,OUTPUT); //LED como salida
}

////////// programa que se ejecutará cíclicamente////////
void loop() 
{
digitalWrite(LED1,HIGH);  // Encendemos LED
delay(700);           //mantiene 500ms la instruccion atenrior
digitalWrite(LED1,LOW);  // Apagamos LED
delay(100);           //mantiene 500ms la instruccion atenrior
digitalWrite(LED2,HIGH);  // Encendemos LED
delay(500);           //mantiene 500ms la instruccion atenrior
digitalWrite(LED2,LOW);  // Apagamos LED
delay(100);           //mantiene 500ms la instruccion atenrior
digitalWrite(LED3,HIGH);  // Encendemos LED
delay(700);           //mantiene 500ms la instruccion atenrior
digitalWrite(LED3,LOW);  // Apagamos LED
delay(100);           //mantiene 500ms la instruccion atenrior
}
