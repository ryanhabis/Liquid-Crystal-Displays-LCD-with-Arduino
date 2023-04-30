# Liquid-Crystal-Displays-LCD-with-Arduino

 how to use the LiquidCrystal library with an Arduino board to display text and numbers on an LCD screen. Here's a breakdown of the code:

The first line includes the LiquidCrystal library, which is required to communicate with the LCD.

The second section defines the pins used to communicate with the LCD. The variables rs, en, d4, d5, d6, and d7 represent the pins connected to the LCD's RS, EN, D4, D5, D6, and D7 pins, respectively.

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

# hello wolrd and counter
![IMG_8953](https://user-images.githubusercontent.com/30758550/235369445-8f01d603-26a5-4d94-bf23-3bc31401cdc9.jpg)

# Autoscroll to the right
![IMG_8954](https://user-images.githubusercontent.com/30758550/235369560-8406639e-ffdb-44e1-a547-64f0efd3e7aa.jpg)
