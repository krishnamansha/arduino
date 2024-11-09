Button_controlled_led2
Pin Setup: The button is connected to pin 7 and the LED to builtin led. The button pin is configured as an input, and the LED pin as an output. 
State Variables: buttonState stores the current state of the button (pressed or not). lastButtonState stores the previous state of the button. 
LedState keeps track of whether the LED is currently on or off.
Button Press Logic: The button’s state is read with digitalRead(buttonPin). When the button is pressed, it toggles the LED state between on and off using ledState = !ledState.
The digitalWrite(ledPin, ledState) function turns the LED on or off based on the ledState.
