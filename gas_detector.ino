// Pin Definitions
#define MQ2_PIN    A0
#define RELAY_PIN  7
#define BUZZER_PIN 8
#define GREEN_LED  5
#define RED_LED    6

int threshold = 300;  // based on your readings (normal ≈ 95, gas ≈ 800)

void setup() {
  Serial.begin(9600);

  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  // SAFE STATE at start  → relay OFF, motor OFF (active-LOW)
  digitalWrite(RELAY_PIN, HIGH);   // HIGH = OFF for your relay
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(GREEN_LED, HIGH);   // Normal = green ON
  digitalWrite(RED_LED, LOW);      // Alarm OFF

  Serial.println("Gas Detector Ready...");
}

void loop() {
  int sensorValue = analogRead(MQ2_PIN);
  Serial.println(sensorValue);     // For debugging / demo

  if (sensorValue > threshold) {
    // 🚨 GAS DETECTED → turn motor ON
    digitalWrite(RELAY_PIN, LOW);    // LOW = ON (same as your test code)
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  } else {
    // ✅ SAFE → motor OFF
    digitalWrite(RELAY_PIN, HIGH);   // HIGH = OFF
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  }

  delay(200);
}
