

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int percent = ((float)analogRead(A0)/1023)*100 * 2.55;
  analogWrite(3,percent);
  analogWrite(5,percent);
  Serial.println(percent);
}
