# mire.blinkled

# Arduino 001 LED Blinking Project

This project demonstrates how to blink an LED connected to an Arduino board using basic C++ code.

## Components Required

- Arduino board (e.g., Uno, Nano)
- LED
- 220-ohm resistor
- Breadboard
- Jumper wires

## Circuit Diagram

1. Connect the longer leg (anode) of the LED to digital pin 13 on the Arduino.
2. Connect the shorter leg (cathode) of the LED to one end of the 220-ohm resistor.
3. Connect the other end of the resistor to the GND (ground) pin on the Arduino.

## Code Explanation

### Setup

- **`int ledPin = 13;`**: This line creates a variable `ledPin` to store the pin number where the LED is connected.
- **`void setup()`**: The `setup()` function is called once when the program starts. Inside this function:
  - **`pinMode(ledPin, OUTPUT);`**: This sets the `ledPin` as an output pin, meaning it will be used to send signals to control the LED.

### Loop

- **`void loop()`**: The `loop()` function runs continuously after `setup()`. Inside this function:
  - **`digitalWrite(ledPin, HIGH);`**: This turns the LED on by setting the `ledPin` to `HIGH`.
  - **`delay(1000);`**: This pauses the program for 1000 milliseconds (1 second) while the LED remains on.
  - **`digitalWrite(ledPin, LOW);`**: This turns the LED off by setting the `ledPin` to `LOW`.
  - **`delay(1000);`**: This pauses the program for 1000 milliseconds (1 second) while the LED remains off.

## How to Use

1. Connect your Arduino board to your computer.
2. Open the Arduino IDE.
3. Copy and paste the provided code into a new sketch.
4. Upload the sketch to your Arduino board.
5. Watch the LED blink on and off at 1-second intervals.

## License

This project is open-source and available under the [MIT License](LICENSE).

---

Happy coding!
