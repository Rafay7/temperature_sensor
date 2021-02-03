int temp = A2;
void setup()
{
  pinMode(temp, INPUT);
  Serial.begin(9600);
}

void loop() {
  float reading = analogRead(temp);
  // put your main code here, to run repeatedly:
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 // print out the voltage
 Serial.print(voltage); Serial.println(" volts");
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100 ;
  Serial.print(temperatureC); Serial.print("Centigrade");
  Serial.println();
  delay(5000);
}
