void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
  {
    char temp = Serial.read();
    if (temp == 'O') digitalWrite(LED_BUILTIN, LOW);
    else if (temp == 'F') digitalWrite(LED_BUILTIN, HIGH);
  }
}
