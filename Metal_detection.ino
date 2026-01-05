#define METAL_SENSOR_PIN A0
#define VIBRATION_PIN 7
#define ELECTROMAGNET_PIN 8

void setup() {
  Serial.begin(9600);

  pinMode(VIBRATION_PIN, OUTPUT);
  pinMode(ELECTROMAGNET_PIN, OUTPUT);

  digitalWrite(VIBRATION_PIN, LOW);
  digitalWrite(ELECTROMAGNET_PIN, LOW);
}

void loop() {
  int sensorValue = analogRead(METAL_SENSOR_PIN);
  Serial.println(sensorValue); 

  if (sensorValue > 600) {
    digitalWrite(VIBRATION_PIN, HIGH);
    digitalWrite(ELECTROMAGNET_PIN, HIGH);

    delay(500);
    digitalWrite(VIBRATION_PIN, LOW);
  } else {
    digitalWrite(ELECTROMAGNET_PIN, LOW);
  }

  delay(100);
}
