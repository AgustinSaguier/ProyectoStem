// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 int valor=0;
// Declaramos la variable para controlar el servo
Servo waist;
Servo shoulder;
Servo elbow;
Servo wristRoll;
Servo wristPitch;
Servo gripper;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  waist.attach(2);
  shoulder.attach(3);
  elbow.attach(4);
  wristRoll.attach(5);
  wristPitch.attach(6);
  gripper.attach(7);
 
  // Inicializamos el angulo de los servo motores
  waist.write(90);
  shoulder.write(110);
  elbow.write(0);
  wristRoll.write(10);
  wristPitch.write(40);
  gripper.write(0);  
}
 
void loop() {

  valor=Serial.read();
  if (valor=='1'){
    for (int i = 110; i >= 70; i--)
    {
      // Desplazamos al ángulo correspondiente
      shoulder.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    }
    
    gripper.write(120);

    delay(500);

    for (int i = 40; i >= 25; i--)
    {
      // Desplazamos al ángulo correspondiente
      wristPitch.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }
    
    for (int i = 0; i <= 15; i++)
    {
      // Desplazamos al ángulo correspondiente
      elbow.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }

    delay(100);

    gripper.write(0);

    
    delay(2000);
    
    
    
    
    for (int i = 70; i <= 130; i++)
    {
      // Desplazamos al ángulo correspondiente
      shoulder.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    }
    for (int i = 15; i <=60; i++)
    {
      // Desplazamos al ángulo correspondiente
      elbow.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }

    delay(100);
    for (int i = 25; i >= 5; i--)
    {
      // Desplazamos al ángulo correspondiente
      wristPitch.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }    
    delay(2000);
    gripper.write(100);
    delay(1000);
    elbow.write(0);
    delay(100);
    wristPitch.write(40);
    delay(100);
    for (int i = 130; i >= 110; i--)
    {
      // Desplazamos al ángulo correspondiente
      shoulder.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    } 
    delay(100);
    gripper.write(0);    



  }

  
  if (valor=='2'){
    for (int i = 110; i >= 70; i--)
    {
      // Desplazamos al ángulo correspondiente
      shoulder.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    }
    
    gripper.write(120);

    delay(500);

    for (int i = 40; i >= 25; i--)
    {
      // Desplazamos al ángulo correspondiente
      wristPitch.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }
    
    for (int i = 0; i <= 15; i++)
    {
      // Desplazamos al ángulo correspondiente
      elbow.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }

    delay(100);

    gripper.write(0);

    
    delay(2000);
    
    
    
    
    for (int i = 70; i <= 110; i++)
    {
      // Desplazamos al ángulo correspondiente
      shoulder.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    }

    for (int i = 90; i >= 0; i--)
    {
      // Desplazamos al ángulo correspondiente
      waist.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    }

    shoulder.write(140);
    
    for (int i = 15; i <=60; i++)
    {
      // Desplazamos al ángulo correspondiente
      elbow.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }


    for (int i = 25; i >= 0; i--)
    {
      // Desplazamos al ángulo correspondiente
      wristPitch.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }  
    gripper.write(100);
    delay(1000);
    elbow.write(0);
    delay(1000);
    wristPitch.write(40);
    delay(1000);
        for (int i = 140; i >= 110; i--)
    {
      // Desplazamos al ángulo correspondiente
      shoulder.write(i);
      
      // Hacemos una pausa de 25ms
      delay(50);
  
    
    }
    gripper.write(0);
    for (int i = 0; i <= 90; i++)
    {
      // Desplazamos al ángulo correspondiente
      waist.write(i);
      
      // Hacemos una pausa de 25ms
      delay(25);
  
    
    }    



  }

}
