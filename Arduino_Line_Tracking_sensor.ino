void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // only added this line
}

void loop()
{
  Serial.println(digitalRead(3)); // print the data from the sensor
  
  if (digitalRead(3) == HIGH)  // black line detected
  {
    digitalWrite(13, HIGH);  // LED ON
  }
  else
  {
    digitalWrite(13, LOW);   // LED OFF
  }

  delay(500);
}