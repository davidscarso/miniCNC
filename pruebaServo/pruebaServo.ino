#include <Servo.h>                    // Incluir la librería Servo
Servo servo1;                         // Crear un objeto tipo Servo llamado servo1
int angulo = 0;

void setup()
{
  Serial.begin(9600);     // inicia la comunicación serial
  servo1.attach(10) ;             // Conectar servo1 al pin 9

  angulo = 10;
  servo1.write(angulo);
  Serial.print("ANGULO: ");
  Serial.println(angulo);
  delay(100);

  angulo = 20;
  servo1.write(angulo);
  Serial.print("ANGULO: ");
  Serial.println(angulo);
  delay(100);

  angulo = 30;
  servo1.write(angulo);
  Serial.print("ANGULO: ");
  Serial.println(angulo);
  delay(100);

  angulo = 100;
  servo1.write(angulo);
  Serial.print("ANGULO: ");
  Serial.println(angulo);
  delay(100);
}

void loop()
{

}
