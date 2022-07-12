/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com
 */
int redled =3;    // initialize digital pin. 
int yellowled =5; 
int greenled =7; 
void setup()
{
  pinMode(redled, OUTPUT); 
  pinMode(yellowled, OUTPUT); 
  pinMode(greenled, OUTPUT);
}
void loop()
{
  digitalWrite(greenled, HIGH); // turn on green LED 
  delay(5000);       // wait 5 seconds 
  digitalWrite(greenled, LOW); // turn off green LED 
  for(int i=0;i<3;i++)      // blinks for 3 times
  {
    delay(500);// wait 0.5 second 
    digitalWrite(yellowled, HIGH); // turn on yellow LED 
    delay(500);         // wait 0.5 second 
    digitalWrite(yellowled, LOW); // turn off yellow LED
  }
  delay(500);         // wait 0.5 second 
  digitalWrite(redled, HIGH);// turn on red LED 
  delay(5000);      // wait 5 second 
  digitalWrite(redled, LOW);// turn off red LED
}

