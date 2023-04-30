/**
 * This code uses an Arduino board and a Liquid Crystal Display (LCD) to display the message "hello, world!" and alternates between turning off and turning on the blinking cursor on the screen.

Here's a breakdown of the code:

The LiquidCrystal library is included at the top of the code.

The pins used to communicate with the LCD are defined as constants: rs, en, d4, d5, d6, and d7.

A LiquidCrystal object named "lcd" is created using the pins defined in step 2.

In the setup() function, the lcd.begin() function is called to initialize the LCD with 16 columns and 2 rows, and the lcd.print() function is used to display the message "hello, world!" on the screen.

In the loop() function, the lcd.noBlink() function is called to turn off the blinking cursor on the screen, followed by a delay of 3 seconds using the delay() function.

The lcd.blink() function is then called to turn on the blinking cursor on the screen, followed by another delay of 3 seconds using the delay() function.

This loop will continue indefinitely, with the cursor blinking on and off every 3 seconds.

Overall, this code demonstrates how to initialize an LCD and display a message on the screen, as well as how to turn on and off the blinking cursor.

*/
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

  // Print a message to the LCD.

  lcd.print("hello, world!");
}

void loop() {

  // Turn off the blinking cursor:

  lcd.noBlink();

  delay(3000);

  // Turn on the blinking cursor:

  lcd.blink();

  delay(3000);
}