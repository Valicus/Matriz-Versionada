
//Version 0.2 alpha
//Samuel Felipe Vargas y Mateo Felipe Torres
#include <Servo.h>

Servo Garra;  
Servo Brazo;
Servo Codo;
Servo Base;


int matriz [4][20]={{10,20,30,40,50,60,70,80,92,95,100,120,130,140},{100,120,130,140,150,160,170,180,190},{85,95,105,110,120,130,140,150,160,170,180},{}    };

void setup() {
Garra.attach(7);
Garra.write(130);
Codo.attach(4);
Brazo.attach(6);
Base.attach(5);
Base.write(85);
Codo.write(40);


  //////////////////////////////// Movimiento incial de brazo

  Brazo.write(matriz[0][0]);
  delay(100);
  Brazo.write(matriz[0][1]);
  delay(100);
  Brazo.write(matriz[0][2]);
  delay(100);
  Brazo.write(matriz[0][3]);
  delay(100);
  Brazo.write(matriz[0][5]);
  delay (100);
  Brazo.write(matriz[0][4]);
  delay(100);
  Brazo.write(matriz[0][5]);
  delay(100);
  Brazo.write(matriz[0][6]);
  delay(100);
  Brazo.write(matriz[0][7]);
  delay(100);
  Brazo.write(matriz[0][8]);
  delay (100);
  Brazo.write(matriz[0][9]);
  delay (100);
  Brazo.write(matriz[0][10]);
  delay (100);


  ////////////////////////// cerrado de garra

  Garra.write(170);
  Garra.write(matriz[1][0]);
  delay(100);
  Garra.write(matriz[1][1]);
  delay(100);
  Garra.write(matriz[1][2]);
  delay(100);
  Garra.write(matriz[1][3]);
  delay(100);
  Garra.write(matriz[1][4]);
  delay(100);
  Garra.write(matriz[1][5]);
  delay(100);
  Garra.write(matriz[1][6]);
  delay(100);
  Garra.write(matriz[1][7]);
  delay(100);

  ////////////////////////// levantamiento de brazo

  Brazo.write(matriz[0][8]);
  delay(100);
  Brazo.write(matriz[0][7]);
  delay(100);
  Brazo.write(matriz[0][6]);
  delay(100);
  Brazo.write(matriz[0][5]);
  delay(100);
  Brazo.write(matriz[0][4]);
  delay(100);
  Brazo.write(matriz[0][3]);
  delay(100);
  Codo.write(matriz[0][3]);
  delay(100);
  Codo.write(matriz[0][4]);
  delay(100);
  Codo.write(matriz[0][5]);
  delay(100);
  Codo.write(matriz[0][6]);
  delay(100);


  //////////////////////////// movimiento de base

  Base.write(matriz[2][0]);
  delay(100);
  Base.write(matriz[2][1]);
  delay(100);
  Base.write(matriz[2][2]);
  delay(100);
  Base.write(matriz[2][3]);
  delay(100);
  Base.write(matriz[2][4]);
  delay(100);
  Base.write(matriz[2][5]);
  delay(100);
  Base.write(matriz[2][6]);
  delay(100);
  Base.write(matriz[2][7]);
  delay(100);
  Base.write(matriz[2][8]);
  delay(100);
  Base.write(matriz[2][9]);


  /////////////////////// movimiento final de garra

  Garra.write(matriz[1][7]);
  delay(100);
  Garra.write(matriz[1][6]);
  delay(100);
  Garra.write(matriz[1][5]);
  delay(100);
  Garra.write(matriz[1][4]);
  delay(100);
  Garra.write(matriz[1][3]);
  delay(100);
  Garra.write(matriz[1][2]);
  delay(100);
  Garra.write(matriz[1][1]);
  delay(100);
  Garra.write(matriz[1][0]);
  delay(100);






}

void loop() {
/////////////////////////////////////////////////////////////////////////////////////////////////////////////






}
