# Liquid-Crystal-Displays-LCD-with-Arduino

 how to use the LiquidCrystal library with an Arduino board to display text and numbers on an LCD screen. Here's a breakdown of the code:

The first line includes the LiquidCrystal library, which is required to communicate with the LCD.

The second section defines the pins used to communicate with the LCD. The variables rs, en, d4, d5, d6, and d7 represent the pins connected to the LCD's RS, EN, D4, D5, D6, and D7 pins, respectively.

The LiquidCrystal object is then created using the variables defined in step 2.

In the setup() function, the LCD is initialized by calling the lcd.begin() function, which sets the number of columns and rows of the display. In this case, the display has 16 columns and 2 rows. The lcd.print() function is then called to print "hello, world!" on the first row of the display.

In the loop() function, the lcd.setCursor() function is used to set the cursor to the first column of the second row. The lcd.print() function is then called to print the number of seconds since the Arduino board was last reset. The millis() function returns the number of milliseconds that have elapsed since the board was reset, so dividing this value by 1000 gives the number of seconds.

Overall, this code initializes the LCD screen and displays a message on the first row of the screen. It then continuously updates the second row of the screen with the number of seconds that have elapsed since the board was last reset.


# To wire your LCD screen to your board, connect the following pins:

* LCD RS pin to digital pin 12
* LCD Enable pin to digital pin 11
* LCD D4 pin to digital pin 5
* LCD D5 pin to digital pin 4
* LCD D6 pin to digital pin 3
* LCD D7 pin to digital pin 2
* LCD R/W pin to GND
* LCD VSS pin to GND
* LCD VCC pin to 5V
* LCD LED+ to 5V through a 220 ohm resistor
* LCD LED- to GND

![LCD_Base_bb_Fritz](https://user-images.githubusercontent.com/30758550/235367611-dc217d03-7ee3-425c-a32c-c651af5a4a2f.png)
The circuit (made using Fritzing).

# Schematic

![LCD_Base_bb_Schem](https://user-images.githubusercontent.com/30758550/235367794-8416ad7a-e78e-4974-bf2f-2b024b36afcc.png)
The schematic (made using Fritzing).
