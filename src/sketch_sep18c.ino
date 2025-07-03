#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3); // RX, TX

void setup() 
{
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() 
{
  int index = analogRead(A0);
  int middle = analogRead(A1);
  int ring = analogRead(A2);
  int little = analogRead(A3);

  // Send messages based on sensor readings
  if (index <=1010)
  {
    String x = "I Need water.";
    bluetooth.println(x);
   // bluetooth.print(";");
  }
  else if (middle >= 930)
  {
    String x = "I Need food.";
    bluetooth.println(x);
    //bluetooth.print(";");
  }
  else if (ring >= 940)
  {
    String x = "Want to go to washroom.";
    bluetooth.println(x);
    //bluetooth.print(";");
  }
  else if (little>= 965)
  {
    String x = "EMERGENCY!";
    bluetooth.println(x);
    //bluetooth.print(";");
  }
  // else
  // {
  //   String x = "-";
  //   bluetooth.print(x);
  //   //bluetooth.print(";"); 
  // }
  delay(2000);
}
