//Project by @carbon_GTV support me on instagram, donate if you like it!

const int valveBrake1Pin = 2; // Pin für das erste Airbrake-Ventil
const int valveBrake2Pin = 3; // Pin für das zweite Airbrake-Ventil
const int brakeTriggerPin = 4; // Pin für den Taster/Sensor

void setup() {
  pinMode(valveBrake1Pin, OUTPUT);
  pinMode(valveBrake2Pin, OUTPUT);
  pinMode(brakeTriggerPin, INPUT_PULLUP);
  // Initialisiere Ventile in ausgeschaltetem Zustand
  digitalWrite(valveBrake1Pin, LOW);
  digitalWrite(valveBrake2Pin, LOW);
}

void loop() {
  if (digitalRead(brakeTriggerPin) == LOW) {
    // Aktiviere Airbrakes
    digitalWrite(valveBrake1Pin, HIGH);
    digitalWrite(valveBrake2Pin, HIGH);
    delay(1000); // Halte die Airbrakes für eine Sekunde aktiviert
    // Deaktiviere Airbrakes
    digitalWrite(valveBrake1Pin, LOW);
    digitalWrite(valveBrake2Pin, LOW);
  }
}
