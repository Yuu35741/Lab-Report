void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(5000);
  delay(1000);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
  {
    String temp = Serial.readString();
    if (temp == "ON") digitalWrite(LED_BUILTIN, LOW);
    else if (temp == "OFF") digitalWrite(LED_BUILTIN, HIGH);
  }
}
