/*
 *  Bignumber.c
 *
 * Created : 2/28/2025 17:21:02
 * Author : Mohamad Hoseyn Meymandi
 * Contact : https://github.com/something-Constant
*/

#include "BigNumber.h"


/*
  the "BigNumberinit" will initialize the CGROM address 0 to 8
*/
void BigNumberinit(void) {

  lcd_init();
  lcd_clear();

#ifdef Big

  char _Big[8][8] = {
    {0x07, 0x0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X07},
    {0X1F, 0X1F, 0X1F, 0X00, 0X00, 0X00, 0X00, 0X00},
    {0X1C, 0X1E, 0X1E, 0X1E, 0X1E, 0X1E, 0X1E, 0X1C},
    {0X0F, 0X07, 0X00, 0X00, 0X00, 0X00, 0X03, 0X07},
    {0X00, 0X00, 0X00, 0X00, 0X00, 0X1F, 0X1F, 0X1F},
    {0X1E, 0X1C, 0X00, 0X00, 0X00, 0X00, 0X1E, 0X1C},
    {0X1F, 0X1F, 0X1F, 0X00, 0X00, 0X00, 0X1F, 0X1F},
    {0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X07, 0X0F}};

  lcd_CustomChar(_Big[0], 0x40);
  lcd_CustomChar(_Big[1], 0x48);
  lcd_CustomChar(_Big[2], 0x50);
  lcd_CustomChar(_Big[3], 0x58);
  lcd_CustomChar(_Big[4], 0x60);
  lcd_CustomChar(_Big[5], 0x68);
  lcd_CustomChar(_Big[6], 0x70);
  lcd_CustomChar(_Big[7], 0x78);

#elif defined(Real)
  char _Real[8][8] = {
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x1C, 0x0E, 0x06, 0x07, 0x07, 0x06, 0x0E, 0x1C},
    {0x07, 0x0E, 0x0C, 0x1C, 0x1C, 0x0C, 0x0E, 0x07},
    {0x1E, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18},
    {0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0E, 0x07},
    {0x03, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x1F}};

  lcd_CustomChar(_Real[0], 0x40);
  lcd_CustomChar(_Real[1], 0x48);
  lcd_CustomChar(_Real[2], 0x50);
  lcd_CustomChar(_Real[3], 0x58);
  lcd_CustomChar(_Real[4], 0x60);
  lcd_CustomChar(_Real[5], 0x68);
  lcd_CustomChar(_Real[6], 0x70);
  lcd_CustomChar(_Real[7], 0x78);

#elif defined(Classic)
  char _Classic[8][8] = {
    {0x1F, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1F},
    {0x1F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x1F},
    {0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F}};

  lcd_CustomChar(_Classic[0], 0x40);
  lcd_CustomChar(_Classic[1], 0x48);
  lcd_CustomChar(_Classic[2], 0x50);
  lcd_CustomChar(_Classic[3], 0x58);
  lcd_CustomChar(_Classic[4], 0x60);
  lcd_CustomChar(_Classic[5], 0x68);
  lcd_CustomChar(_Classic[6], 0x70);
  lcd_CustomChar(_Classic[7], 0x78);

#elif defined(Square)
  char _Square[8][8] = {
    {0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x1F},
    {0x1F, 0x1F, 0x03, 0x03, 0x03, 0x03, 0x1F, 0x1F},
    {0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18},
    {0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F},
    {0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x1F}};

  lcd_CustomChar(_Square[0], 0x40);
  lcd_CustomChar(_Square[1], 0x48);
  lcd_CustomChar(_Square[2], 0x50);
  lcd_CustomChar(_Square[3], 0x58);
  lcd_CustomChar(_Square[4], 0x60);
  lcd_CustomChar(_Square[5], 0x68);
  lcd_CustomChar(_Square[6], 0x70);
  lcd_CustomChar(_Square[7], 0x78);

#elif defined(Angled)

  char _Angled[8][8] = {  
    {0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},
    {0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F}};

  lcd_CustomChar(_Angled[0], 0x40);
  lcd_CustomChar(_Angled[1], 0x48);
  lcd_CustomChar(_Angled[2], 0x50);
  lcd_CustomChar(_Angled[3], 0x58);
  lcd_CustomChar(_Angled[4], 0x60);
  lcd_CustomChar(_Angled[5], 0x68);
  lcd_CustomChar(_Angled[6], 0x70);
  lcd_CustomChar(_Angled[7], 0x78);

#elif defined(Digital)

  char _Digital[8][8] = { 
    {0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10},
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F},
    {0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F}};

  lcd_CustomChar(_Digital[0], 0x40);
  lcd_CustomChar(_Digital[1], 0x48);
  lcd_CustomChar(_Digital[2], 0x50);
  lcd_CustomChar(_Digital[3], 0x58);
  lcd_CustomChar(_Digital[4], 0x60);
  lcd_CustomChar(_Digital[5], 0x68);
  lcd_CustomChar(_Digital[6], 0x70);
  lcd_CustomChar(_Digital[7], 0x78);

#elif defined(DigitalPars)
  char _DigitalPars[8][8] = {
    {0x1B, 0x10, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10},
    {0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x10, 0x1B},
    {0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10},
    {0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B},
    {0x1B, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x1B},
    {0x1B, 0x10, 0x00, 0x10, 0x10, 0x00, 0x10, 0x1B},
    {0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B}};

  lcd_CustomChar(_DigitalPars[0], 0x40);
  lcd_CustomChar(_DigitalPars[1], 0x48);
  lcd_CustomChar(_DigitalPars[2], 0x50);
  lcd_CustomChar(_DigitalPars[3], 0x58);
  lcd_CustomChar(_DigitalPars[4], 0x60);
  lcd_CustomChar(_DigitalPars[5], 0x68);
  lcd_CustomChar(_DigitalPars[6], 0x70);
  lcd_CustomChar(_DigitalPars[7], 0x78);
#else

#error "No font selected"

#endif
}

/*

  The BigNumberPrint(number, start), 
  print the numbr on the lcd.

  the "start" is starting point of the number in X axis (left corner of the number).
  the "number" is the single digit number that you want to print.
*/
void BigNumberPrint(char number, char start) {
#ifdef Big
  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      lcd_putchar(2);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(254);
      lcd_putchar(254);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(254);
      lcd_putchar(254);
      lcd_putchar(2);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(3);
      lcd_putchar(6);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      lcd_putchar(4);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(3);
      lcd_putchar(6);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(7);
      lcd_putchar(4);
      lcd_putchar(2);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(4);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(254);
      lcd_putchar(254);
      lcd_putchar(2);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(6);
      lcd_putchar(5);

      lcd_gotoxy(start, 1);
      lcd_putchar(7);
      lcd_putchar(4);
      lcd_putchar(2);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(6);
      lcd_putchar(5);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      lcd_putchar(2);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(1);
      lcd_putchar(1);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(254);
      lcd_putchar(254);
      lcd_putchar(2);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(6);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      lcd_putchar(2);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(6);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(7);
      lcd_putchar(4);
      lcd_putchar(2);

      break;
  }

#elif defined(Real)

  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(254);
      lcd_putchar(254);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(2);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(254);
      lcd_putchar(5);

      lcd_gotoxy(start, 1);
      lcd_putchar(254);
      lcd_putchar(5);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(1);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(1);
      lcd_putchar(2);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(7);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(254);
      lcd_putchar(5);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(7);
      lcd_putchar(0);

      lcd_gotoxy(start, 1);
      lcd_putchar(1);
      lcd_putchar(2);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(7);
      lcd_putchar(0);

      lcd_gotoxy(start, 1);
      lcd_putchar(6);
      lcd_putchar(2);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(254);
      lcd_putchar(5);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(3);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(2);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(3);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(1);
      lcd_putchar(4);

      break;
  }

#elif defined(Classic)

  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(0XFE);
      lcd_putchar(0XFE);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(2);
      lcd_putchar(3);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(4);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(6);
      lcd_putchar(1);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(7);
      lcd_putchar(6);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(4);
      lcd_putchar(1);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(4);
      lcd_putchar(1);

      break;
  }
#elif defined(Square)

  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(0XFF);
      lcd_putchar(0XFF);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(2);
      lcd_putchar(3);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(4);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(6);
      lcd_putchar(1);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(7);
      lcd_putchar(6);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(4);
      lcd_putchar(1);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(4);
      lcd_putchar(1);

      break;
  }

#elif defined(Angled)

  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(0XFE);
      lcd_putchar(0XFE);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(4);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(4);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(2);
      lcd_putchar(5);

      lcd_gotoxy(start, 1);
      lcd_putchar(4);
      lcd_putchar(1);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(6);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(6);
      lcd_putchar(1);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(2);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(3);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0);
      lcd_putchar(1);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(6);
      lcd_putchar(7);

      break;
  }

#elif defined(Digital)

  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(1);
      lcd_putchar(2);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(3);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(5);
      lcd_putchar(3);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(6);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(4);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(3);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(4);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(6);

      lcd_gotoxy(start, 1);
      lcd_putchar(5);
      lcd_putchar(4);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(6);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(5);
      lcd_putchar(4);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(7);
      lcd_putchar(4);

      break;
  }

#elif defined(DigitalPars)

  switch (number) {
    case (Ziro):

      lcd_gotoxy(start, 0);
      lcd_putchar(0);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(1);
      lcd_putchar(2);

      break;

    case (One):

      lcd_gotoxy(start, 0);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      break;

    case (Two):

      lcd_gotoxy(start, 0);
      lcd_putchar(3);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(5);
      lcd_putchar(3);
      break;

    case (Three):

      lcd_gotoxy(start, 0);
      lcd_putchar(6);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(4);

      break;

    case (Four):
      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(1);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      break;

    case (Five):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(3);

      lcd_gotoxy(start, 1);
      lcd_putchar(3);
      lcd_putchar(4);

      break;

    case (Six):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(6);

      lcd_gotoxy(start, 1);
      lcd_putchar(5);
      lcd_putchar(4);

      break;

    case (Seven):

      lcd_gotoxy(start, 0);
      lcd_putchar(6);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(0XFE);
      lcd_putchar(2);

      break;

    case (Eight):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(5);
      lcd_putchar(4);
      break;

    case (Nine):

      lcd_gotoxy(start, 0);
      lcd_putchar(5);
      lcd_putchar(4);

      lcd_gotoxy(start, 1);
      lcd_putchar(7);
      lcd_putchar(4);

      break;
  }
#else

#error "No font selected"

#endif
}

/* 
  The BigNumberClaer(start), 
  replaceing the 2 conlumn of row 1 and 2 conlumn of row 2
  with white space and "start" will be the starting point.
  
  the "start" is starting point of the number in X axis (left corner of the number).
*/
void BigNumberClaer(char start) {
#ifdef Big
  lcd_gotoxy(start, 0);
  lcd_putchar(0xFE);
  lcd_putchar(0xFE);
  lcd_putchar(0xFE);
  lcd_gotoxy(start, 1);
  lcd_putchar(0xFE);
  lcd_putchar(0xFE);
  lcd_putchar(0xFE);

#else
  lcd_gotoxy(start, 0);
  lcd_putchar(0xFE);
  lcd_putchar(0xFE);
  lcd_gotoxy(start, 1);
  lcd_putchar(0xFE);
  lcd_putchar(0xFE);

#endif
}

/* 
  The BigNumberBlink(char value, char start, char on_time, char off_time, char *time), 
  replaceing the 2 conlumn of row 1 and 2 conlumn of row 2
  with white space, the "start" will be the starting point,
  the "on_time" is the time that the number is showing and 
  the "off_time" is the time that the number is replaced with white space.
  
  the "value" is the value of the space that you want to Blink.
  the "start" is starting point of the number in X axis (left corner of the number).
  the "on_time" is the time that the number is the value.
  the "off_time" is the time that the number is replaced with white space.
  the "*time" is the timer valriable that is increasing in time.
  
  ** the off_time must be bigger then on_time.
*/

void BigNumberBlink(char value, char start, unsigned int on_time, unsigned int off_time,
                    unsigned int *time) {
  off_time += on_time;

  /* On time */
  if (*time < on_time) {
    BigNumberPrint(value, start);
  }

  /* Off time */
  if ((*time > on_time) && (*time < off_time)) {
    BigNumberClaer(start);
  }

  if (*time > off_time)
    *time = 0;
}

