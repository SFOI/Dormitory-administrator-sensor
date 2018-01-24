const int PIRSensor = 2; //PIRsensor'S PIN
int sensorValue; //PIR's return
void setup() {
  // put your setup code here, to run once:
  pinMode (PIRSensor ,INPUT);
  Serial.begin(9600);//Bluetooth&&PCSerial
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(PIRSensor);
  delay(3000);//+3S
  /*if(sensorValue == HIGH){ //ON
    Serial.println("ON");
    Serial.println('X');
  }
  else{
    Serial.println("OFF");//OFF
  }*/
  (sensorValue == HIGH)?Serial.println('X'):Serial.println("OFF");
}
