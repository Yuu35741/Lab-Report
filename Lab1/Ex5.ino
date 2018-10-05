#define LED_ON    1
#define LED_OFF   2

int T_on, T_off;
bool isOn;
int counter;
void setup() {
  // put your setup code here, to run once:
  T_on = 300;
  T_off = 500;
  isOn = 1;
  counter = 0;
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (isOn) {
    if (counter < T_on) counter++;
    else {
      isOn = 0;
      counter = 0;
      digitalWrite(LED_BUILTIN, HIGH);
      }
    }
  else {
    if (counter < T_off) counter++;
    else {
      isOn = 1;
      counter = 0;
      digitalWrite(LED_BUILTIN, LOW);
      }
   }

delay(10);
}
