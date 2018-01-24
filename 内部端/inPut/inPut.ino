const int LED = 12;//LED PIN
int incomingByte=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Bluetooth
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);//OFF
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
  if(incomingByte ='X'){
      for(int i=0;i<=3;i++){
      digitalWrite(LED,LOW);//BLINK
      delay(500);//+4S
      digitalWrite(LED,HIGH);
      delay(500);
      }
      digitalWrite(LED, HIGH);
  }
  }
}
