//variables
int ledRed = 12;
int ledBlue = 11;
int ledGreen = 13;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRed, HIGH);
  delay(100);
  digitalWrite(ledRed, LOW);
  delay(100);
  digitalWrite(ledGreen, HIGH);
  delay(100);
  digitalWrite(ledGreen, LOW);
  delay(100);
  digitalWrite(ledBlue, HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);
}
