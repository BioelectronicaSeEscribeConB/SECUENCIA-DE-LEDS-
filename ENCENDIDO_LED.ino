int LED=9; //LED pin 9


///////configuración///
void setup() 
{
 pinMode(LED,OUTPUT); //LED como salida
}

////////// programa que se ejecutará cíclicamente////////
void loop() 
{

digitalWrite(LED,HIGH);  // Encendemos LED
delay(50);           //mantiene 500ms la instruccion atenrior
digitalWrite(LED,LOW);  // Apagamos LED
delay(50);           //mantiene 500ms la instruccion atenrior

}
