#include <AFMotor.h>
#include <Servo.h>                    // Incluir la librería Servo

Servo servo1;                         // Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;

AF_Stepper motor1(256, 1);  // Puerta M1 M2 es el de paso mas largo
AF_Stepper motor2(256, 2);  // Puerta M3 M4

void setup()
{
  Serial.begin(9600);     // inicia la comunicación serial
  Serial.println("Test de motores");

  servo1.attach(10);             // Conectar servo1 al pin 10
  for (angulo  = 20; angulo  <= 50; angulo  += 1)  //incrementa angulo 1 grado
  {
    servo1.write(angulo);
    Serial.print("ANGULO: ");
    Serial.println(angulo);
    delay(10);
  }
  delay(250);
  for (angulo  = 50; angulo  >= 20; angulo  -= 1 ) //decrementa angulo 1 grado
  {
    servo1.write( angulo );
    Serial.print("ANGULO: ");
    Serial.println(angulo);
    delay(10);
  }
  delay(250);

/*

  motor1.setSpeed(20); // 20 rpm
  motor2.setSpeed(20); // 20 rpm

  motor1.step(250, FORWARD, DOUBLE);
  motor2.step(256, FORWARD, DOUBLE);
  delay(2000);

  motor1.step(250, BACKWARD, DOUBLE);
  motor2.step(256, BACKWARD, DOUBLE);
*/
}

void loop()
{

}
