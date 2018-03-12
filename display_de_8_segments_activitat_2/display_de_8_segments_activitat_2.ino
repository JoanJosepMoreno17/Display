/**********************************************************************************
**                                                                               **
**                              Display de 8 segments                            **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 5;          // donar nom al pin 5 de l’Arduino
const int ledB = 6;          // donar nom al pin 6 de l’Arduino
const int ledC = 7;          // donar nom al pin 7 de l’Arduino
const int ledD = 8;          // donar nom al pin 8 de l’Arduino
const int ledE = 9;          // donar nom al pin 9 de l’Arduino
const int ledF = 10;         // donar nom al pin 10 de l’Arduino
const int ledG = 11;         // donar nom al pin 11 de l’Arduino
const int ledDOT = 12;       // donar nom al pin 12 de l’Arduino
const int polsador = 2;      // donar nom al pin 2 de l'Arduino
unsigned long RETARD = 1000;  // temporitzador 
//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledDOT, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(polsador, INPUT); //definr el pin 2 com una entrada
}

//********** Loop *****************************************************************
void loop()
{
if (digitalRead(polsador) == 0)
 { 
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8  //0
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, LOW);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, LOW);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8  //1
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, LOW);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, LOW);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8  //2
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8  //3
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, LOW);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8  //4
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, LOW);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8  //5
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD); 
  digitalWrite(ledA, LOW);    // posar a 5V el pin 5
  digitalWrite(ledB, LOW);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8  //6
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8  //7
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, LOW);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);                  
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8  //8
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD); 
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8  //9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledDOT, HIGH);  // posar a 5V el pin 12
  delay(RETARD);
}
else if (digitalRead(polsador) == 1)
{
  digitalWrite(ledA, LOW);    // posar a 5V el pin 5
  digitalWrite(ledB, LOW);    // posar a 5V el pin 6
  digitalWrite(ledC, LOW);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8  //0
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, LOW);    // posar a 5V el pin 11
  digitalWrite(ledDOT, LOW);  // posar a 5V el pin 12
}
}
//********** Funcions *************************************************************
