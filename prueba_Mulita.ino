#include <Mulita.h>
/*
Pin 11 conectar a IN4  Motor Izq
Pin 10 conectar a IN3  Motor Izq
Pin 9 conectar a IN2   Motor Izq
Pin 8 conectar a IN1   Motor Izq
Pin 7 conectar a IN4   Motor Der
Pin 6 conectar a IN3   Motor Der
Pin 5 conectar a IN2   Motor Der
Pin 4 conectar a IN1   Motor Der
Pin echo a 2 en arduino
Pin trigger a 3 en arduino

*/
Mulita mulita(6);   // El parametro que toma es el diametro de la ruedita ya que puede variar depende del oring
void setup() {
Serial.begin(9600);
}

void loop() {
  
  mulita.avanzar(30);   // El parametro que toma es la distancia en cm a recorrer 
  delay(5000);
  mulita.retroceder(30);    // El parametro que toma es la distancia en cm a recorrer
  delay(5000);
  mulita.girarIzquierda();
  delay(2000);
  mulita.girarDerecha();      // Devuelve la distancia medida por el sensor en cm
  delay(2000);
  for (int i = 0; i < 10; i++)
  {
    Serial.println(mulita.sensarDistancia());
    delay(500);
  }
  delay(99999999999999);    // Para para la mulita

}
