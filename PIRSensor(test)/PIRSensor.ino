//Arduino Uno
//(PIR Motion Sensor
//It's just an example
//So WTF u want

const int PIRSensor = 2; //PIRsensor'S PIN
int sensorValue; //PIR's return
void setup() {
  // put your setup code here, to run once:
  pinMode (PIRSensor ,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(PIRSensor);
  delay(1000);
  if(sensorValue == HIGH){ //ON
    Serial.println("ON");
  }
  else{
    Serial.println("OFF");
    
  }
}
