/**
 * This code uses an Arduino board and a Liquid Crystal Display (LCD) to display numbers from 0 to 9 on the first row of the screen, then scroll those numbers from right to left on the second row.

Here's a breakdown of the code:

The LiquidCrystal library is included at the top of the code.

The pins used to communicate with the LCD are defined as constants: rs, en, d4, d5, d6, and d7.

A LiquidCrystal object named "lcd" is created using the pins defined in step 2.

In the setup() function, the lcd.begin() function is called to initialize the LCD with 16 columns and 2 rows.

In the loop() function, the lcd.setCursor() function is used to set the cursor to the first column of the first row.

A for loop is used to print numbers from 0 to 9 on the first row of the screen, with a delay of 500 milliseconds between each print.

The lcd.setCursor() function is called again, this time to set the cursor to the last column of the second row.

The lcd.autoscroll() function is called to enable automatic scrolling on the LCD.

Another for loop is used to print numbers from 0 to 9 on the second row of the screen, with a delay of 500 milliseconds between each print.

The lcd.noAutoscroll() function is called to turn off automatic scrolling on the LCD.

The lcd.clear() function is called to clear the screen before the loop starts again.

Overall, this code demonstrates how to initialize an LCD and use it to display numbers and enable scrolling.
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
}

void loop() {

  // set the cursor to (0,0):

  lcd.setCursor(0, 0);

  // print from 0 to 9:

  for (int thisChar = 0; thisChar < 10; thisChar++) {

    lcd.print(thisChar);

    delay(500);

  }

  // set the cursor to (16,1):

  lcd.setCursor(16, 1);

  // set the display to automatically scroll:

  lcd.autoscroll();

  // print from 0 to 9:

  for (int thisChar = 0; thisChar < 10; thisChar++) {

    lcd.print(thisChar);

    delay(500);

  }

  // turn off automatic scrolling

  lcd.noAutoscroll();

  // clear screen for the next loop:

  lcd.clear();
}