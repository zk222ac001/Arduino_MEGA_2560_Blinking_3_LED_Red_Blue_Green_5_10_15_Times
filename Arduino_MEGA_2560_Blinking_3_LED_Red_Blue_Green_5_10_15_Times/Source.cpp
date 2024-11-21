// Copy and paste this code into your Arduino IDE
// Define the LED pins
const int RED_LED = 2;
const int BLUE_LED = 3;
const int GREEN_LED = 4;

// Function to blink an LED a specified number of times
void blinkLED(int ledPin, int blinkCount) {
    for (int i = 0; i < blinkCount; i++) {
        digitalWrite(ledPin, HIGH); // Turn the LED on
        delay(500);                 // Wait for 500 milliseconds
        digitalWrite(ledPin, LOW);  // Turn the LED off
        delay(500);                 // Wait for 500 milliseconds
    }
}
void setup() {
    // put your setup code here, to run once:
   // Initialize the LED pins as outputs
    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
     // Blink the Red LED 5 times
    blinkLED(RED_LED, 5);
    // Blink the Blue LED 10 times
    blinkLED(BLUE_LED, 10);
    // Blink the Green LED 5 times
    blinkLED(GREEN_LED, 15);
    // Add a delay before repeating the loop
    delay(2000); // Wait for 2 seconds before starting the sequence again
}
