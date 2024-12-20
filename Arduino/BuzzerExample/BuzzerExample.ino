const int buzzer = 6; //buzzer to arduino pin 9
const int button = 8; //buzzer to arduino pin 9

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  pinMode(button, INPUT); // Set buzzer - pin 9 as an output

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  */
  Serial.println(digitalRead(button));
}
