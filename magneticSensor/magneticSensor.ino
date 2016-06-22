/*
KY-003 Hall magnetic switch
*/
 
int SENSOR = 10 ; // define the Hall magnetic sensor interface
int val ; // define numeric variables val
 
void setup ()
{
  Serial.begin(9600);
  Serial.print ("Lancement programme");
  pinMode (SENSOR, INPUT) ;
}
 
void loop ()
{
  val = digitalRead (SENSOR) ; 
  if (val == LOW) 
  {
    Serial.print ("Aimant détecté\n");
  }
  {
  Serial.print ("Aucun aimant\n");
  }
  delay(2000);
}
