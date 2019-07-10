#define MQ2pin (0)
float sensorValue;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Gas Sensor warning Up");
  delay(20000);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=analogRead(MQ2pin);
  Serial.print("Sensor value:");
  Serial.print(sensorValue);
  if(sensorValue < 100) 
  {
    Serial.print(" | Smoke detected!");
  }
  else{
    Serial.print(" Smoke not");
  }
  Serial.println("");
  delay(20); // wait 2s for next reading
}
