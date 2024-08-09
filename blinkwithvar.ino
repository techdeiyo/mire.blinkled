int ledPin = 13;  // Create a variable to store the LED pin number

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the ledPin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  delay(1000);  // Wait for 1 second
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(1000);  // Wait for 1 second
}
