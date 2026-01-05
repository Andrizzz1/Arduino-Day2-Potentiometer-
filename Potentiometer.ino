int readPin = A5;
float calcVal;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
calcVal = (5.0/1023.0) * (analogRead(readPin)); // to show serial monitor 5-0 output
Serial.println(calcVal);

delay(500);
}
