#include "mbed.h"
#include "TextLCD.h"

DigitalOut led(LED1);      //LED1 = PA_5
TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      int x=0;
      lcd.printf("108061232\n");
      for (char x = 0x1e; x > 0x00; x--)
      { 
            lcd.locate(5,1);
            led = !led;
            lcd.printf("%5i", x);
            ThisThread::sleep_for(1s);
      }
}