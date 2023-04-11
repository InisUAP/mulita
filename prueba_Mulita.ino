#include <Mulita.h>
/*
Pin 4 conectar a IN4   Motor Der
Pin 5 conectar a IN3   Motor Der
Pin 6 conectar a IN2   Motor Der
Pin 7 conectar a IN1   Motor Der
Pin 8 conectar a IN4  Motor Izq
Pin 9 conectar a IN3  Motor Izq
Pin 10 conectar a IN2   Motor Izq
Pin 11 conectar a IN1   Motor Izq


Pin trig a 2 en arduino
Pin echo a 3 en arduino

*/
Mulita mulita;
void setup() {
Serial.begin(9600);
}

void loop() {
  
  mulita.adelante(30);   // El parametro que toma es la distancia en cm a recorrer 
  delay(1000);   // Tiempo de espera
  mulita.atras(30);    // El parametro que toma es la distancia en cm a recorrer
  delay(1000);    // Tiempo de espera
  mulita.izquierda(90);     // El parametro que toma es el angulo de giro
  delay(1000);    // Tiempo de espera
  mulita.derecha(90);      // El parametro que toma es el angulo de giro
  delay(1000);    // Tiempo de espera
  
  for (int i = 0; i < 10; i++)
  {
    Serial.println(mulita.medirDistancia());
    delay(500);
  }
  delay(99999999999999);    // Para para la mulita

}
