/*
 * File:   HD44780.c
 * Author: Marci
 *
 * Created on March 1, 2022, 11:21 AM
 */


#include <xc.h>

#include "HD44780.h"

char buf[4];
char b1, b2, b3;
/* write a byte to the LCD in 4 bit mode */
void lcd_write(unsigned char c)
{
    __delay_us(100);
    if(c & 0x80) LCD_D7 = 1; else LCD_D7 = 0;
    if(c & 0x40) LCD_D6 = 1; else LCD_D6 = 0;
    if(c & 0x20) LCD_D5 = 1; else LCD_D5 = 0;
    if(c & 0x10) LCD_D4 = 1; else LCD_D4 = 0;
    LCD_STROBE;
    if(c & 0x08) LCD_D7 = 1; else LCD_D7 = 0;
    if(c & 0x04) LCD_D6 = 1; else LCD_D6 = 0;
    if(c & 0x02) LCD_D5 = 1; else LCD_D5 = 0;
    if(c & 0x01) LCD_D4 = 1; else LCD_D4 = 0;
    LCD_STROBE;    
    __delay_us(40);
}
/*
 *     Clear and home the LCD
 */
void lcd_clear(void)
{
    LCD_RS = 0;
    lcd_write(0x01); //LCD_CLEAR_DISPLAY
    __delay_ms(2);
}
/* write a string of chars to the LCD */
void lcd_puts(const char *s)
{
    LCD_RS = 1;    // write characters
    while(*s) 
    {    
        lcd_write(*s++);
    }
}
/* write one character to the LCD */
void lcd_putch(unsigned char c)
{
    LCD_RS = 1;    // write characters
    lcd_write(c);
}
/*
 * Go to the specified position
 */
void lcd_goto(unsigned char pos, unsigned char line)
{
    LCD_RS = 0;
    if (line == 0) 
    {
        lcd_write(0x80 + pos);
    }
    else
    {    
        lcd_write(0x80 + pos + 0x40);
    }
}
     
/* initialise the LCD - put into 4 bit mode */
void lcd_init(void)
{
    //várakozás a bekapcsoláskor, hogy a feszültség elérje a 4.5 V-ot
    __delay_ms(15);
    //
    LCD_RS = 0;
    LCD_D4 = 1;       
    LCD_D5 = 1;
    LCD_D6 = 0;
    LCD_D7 = 0;
    //   
    LCD_STROBE;
    __delay_ms(5);
    //
    LCD_STROBE;
    __delay_us(100);
    //
    LCD_STROBE;
    __delay_ms(5);
    //4 bites üzemmód kiválasztása
    LCD_RS = 0;
    LCD_D4 = 0;   
    LCD_D5 = 1; 
    LCD_D6 = 0;
    LCD_D7 = 0;  
    //
    LCD_STROBE;
    __delay_us(40);
    // 
    lcd_write(0x28);// 4 bit mode, 1/16 duty, 5x8 font, 2lines
    lcd_write(0x0C);// display on
    lcd_write(0x01);// clear display and reset cursor
    lcd_write(0x06);// entry mode advance cursor
    //
}
    //lcd_write(0x08); //display off
