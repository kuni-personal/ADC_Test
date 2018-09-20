#define ANALOG_PIN 0
#define BAUD_RATE 9600

int val = 0;

void setup() {
  analogReference(DEFAULT); /* 5V */
  Serial.begin(BAUD_RATE);
}

void loop() {
  val = analogRead(ANALOG_PIN);
  Serial.print("AN0 = ");
  Serial.println(val);
  delay(1000);
}
