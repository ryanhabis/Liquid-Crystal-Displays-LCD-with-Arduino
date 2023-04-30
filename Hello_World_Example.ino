/**
In the setup() function, the LCD is initialized by calling the lcd.begin() function, which sets the number of columns and rows of the display. In this case, the display has 16 columns and 2 rows. The lcd.print() function is then called to print "hello, world!" on the first row of the display.

In the loop() function, the lcd.setCursor() function is used to set the cursor to the first column of the second row. The lcd.print() function is then called to print the number of seconds since the Arduino board was last reset. The millis() function returns the number of milliseconds that have elapsed since the board was reset, so dividing this value by 1000 gives the number of seconds.

Overall, this code initializes the LCD screen and displays a message on the first row of the screen. It then continuously updates the second row of the screen with the number of seconds that have elapsed since the board was last reset.
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
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}
