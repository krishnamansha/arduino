// Pin definitions
const int buttonPin = 7;    // Pin connected to the button
const int ledPin = LED_BUILTIN;       // Pin connected to the LED

// Variables to store button state
int buttonState = 0;        // Variable to hold the current state of the button
int lastButtonState = 0;    // Variable to hold the last state of the button
int ledState = LOW;         // Variable to hold the state of the LED

void setup() {
  // Set the button pin as input
  pinMode(buttonPin, INPUT);
  
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
  
  // Start with the LED off
 // digitalWrite(ledPin, ledState);
}

void loop() {
  // Read the current state of the button
  buttonState = digitalRead(buttonPin);
  
  // Check if the button state has changed from HIGH to LOW
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      // Toggle the LED state (on/off)
      ledState = !ledState;
      
      // Update the LED to the new state
      digitalWrite(ledPin, ledState);
    }
    
    // Update the last button state to the current state
    lastButtonState = buttonState;
    
    // Debounce delay to avoid multiple triggers
    
  }
}
