// Define the LED pin
#define LED 13

// Setup function runs once when the program starts
void setup() {
  // Set the LED pin as an output
  pinMode(13, OUTPUT);
}

// Loop function runs repeatedly after the setup function
void loop() {
  // Turn the LED on (set the pin to HIGH)
  digitalWrite(LED, HIGH);
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
  
  // Turn the LED off (set the pin to LOW)
  digitalWrite(LED, LOW);
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
}
