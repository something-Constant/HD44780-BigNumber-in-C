
#ifndef _BigNumber_H
#define _BigNumber_H

/*Hd44780 Library*/
#include "../LCD/lcd.h"

enum Numberes
{
  Ziro,
  One,
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine
};

/*Fonts:  real_bold 2*2
           Normal:  3*2
           */

// #define real_bold
// // #define Square
#define Digital

char Font;

/*
leftSide -> 0
upperBar -> 1
rightSide -> 2
leftEnd -> 3
lowerBar -> 4
rightEnd -> 5
middleBar -> 6
lowerEnd -> 7
*/

char Normal[8][8] = {

    {0x07, 0x0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X07},
    {0X1F, 0X1F, 0X1F, 0X00, 0X00, 0X00, 0X00, 0X00},
    {0X1C, 0X1E, 0X1E, 0X1E, 0X1E, 0X1E, 0X1E, 0X1C},
    {0X0F, 0X07, 0X00, 0X00, 0X00, 0X00, 0X03, 0X07},
    {0X00, 0X00, 0X00, 0X00, 0X00, 0X1F, 0X1F, 0X1F},
    {0X1E, 0X1C, 0X00, 0X00, 0X00, 0X00, 0X1E, 0X1C},
    {0X1F, 0X1F, 0X1F, 0X00, 0X00, 0X00, 0X1F, 0X1F},
    {0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X07, 0X0F}

};

char real_bold_digits[8][8] = {

    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x1C, 0x0E, 0x06, 0x07, 0x07, 0x06, 0x0E, 0x1C},
    {0x07, 0x0E, 0x0C, 0x1C, 0x1C, 0x0C, 0x0E, 0x07},
    {0x1E, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18},
    {0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0E, 0x07},
    {0x03, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x1F}

};

char Classic[8][8] = {{0x1F, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1F},
                      {0x1F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x1F},
                      {0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00},
                      {0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C},
                      {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
                      {0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
                      {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F},
                      {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F}

};

char _Square[8][8] = {{0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x1F},
                      {0x1F, 0x1F, 0x03, 0x03, 0x03, 0x03, 0x1F, 0x1F},
                      {0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00},
                      {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18},
                      {0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F},
                      {0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00},
                      {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F},
                      {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x1F}};

char _Angled[8][8] = {{0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},
                      {0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F},
                      {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
                      {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10},
                      {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
                      {0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
                      {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
                      {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F}};

char _Digital[8][8] = {

    {0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10},
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},
    {0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F},
    {0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},
    {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F}};

void BigNumberinit(void) {

  lcd_init();
  lcd_clear();

#ifdef Normal

  lcd_CustomChar(Normal[0], 0x40);
  lcd_CustomChar(Normal[1], 0x48);
  lcd_CustomChar(Normal[2], 0x50);
  lcd_CustomChar(Normal[3], 0x58);
  lcd_CustomChar(Normal[4], 0x60);
  lcd_CustomChar(Normal[5], 0x68);
  lcd_CustomChar(Normal[6], 0x70);
  lcd_CustomChar(Normal[7], 0x78);

#elif defined(real_bold)

  lcd_CustomChar(real_bold_digits[0], 0x40);
  lcd_CustomChar(real_bold_digits[1], 0x48);
  lcd_CustomChar(real_bold_digits[2], 0x50);
  lcd_CustomChar(real_bold_digits[3], 0x58);
  lcd_CustomChar(real_bold_digits[4], 0x60);
  lcd_CustomChar(real_bold_digits[5], 0x68);
  lcd_CustomChar(real_bold_digits[6], 0x70);
  lcd_CustomChar(real_bold_digits[7], 0x78);

#elif defined(classic)

  lcd_CustomChar(Classic[0], 0x40);
  lcd_CustomChar(Classic[1], 0x48);
  lcd_CustomChar(Classic[2], 0x50);
  lcd_CustomChar(Classic[3], 0x58);
  lcd_CustomChar(Classic[4], 0x60);
  lcd_CustomChar(Classic[5], 0x68);
  lcd_CustomChar(Classic[6], 0x70);
  lcd_CustomChar(Classic[7], 0x78);

#elif defined(Square)

  lcd_CustomChar(_Square[0], 0x40);
  lcd_CustomChar(_Square[1], 0x48);
  lcd_CustomChar(_Square[2], 0x50);
  lcd_CustomChar(_Square[3], 0x58);
  lcd_CustomChar(_Square[4], 0x60);
  lcd_CustomChar(_Square[5], 0x68);
  lcd_CustomChar(_Square[6], 0x70);
  lcd_CustomChar(_Square[7], 0x78);

#elif defined(Angled)

  lcd_CustomChar(_Angled[0], 0x40);
  lcd_CustomChar(_Angled[1], 0x48);
  lcd_CustomChar(_Angled[2], 0x50);
  lcd_CustomChar(_Angled[3], 0x58);
  lcd_CustomChar(_Angled[4], 0x60);
  lcd_CustomChar(_Angled[5], 0x68);
  lcd_CustomChar(_Angled[6], 0x70);
  lcd_CustomChar(_Angled[7], 0x78);

#elif defined(Digital)

  lcd_CustomChar(_Digital[0], 0x40);
  lcd_CustomChar(_Digital[1], 0x48);
  lcd_CustomChar(_Digital[2], 0x50);
  lcd_CustomChar(_Digital[3], 0x58);
  lcd_CustomChar(_Digital[4], 0x60);
  lcd_CustomChar(_Digital[5], 0x68);
  lcd_CustomChar(_Digital[6], 0x70);
  lcd_CustomChar(_Digital[7], 0x78);
#else

#error "Neither Normal nor real_bold is defined"

#endif
}

void BigNumberPrint(char number, char start) {
#ifdef Normal
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

#elif defined(real_bold)

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

#elif defined(classic)

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
      lcd_putchar(1);
      lcd_putchar(7);

      // lcd_putchar(5);
      // lcd_putchar(1);

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

#error "Neither Normal nor real_bold is defined"

#endif
}

void ClaerBigNumber(char start) {
#ifdef Normal
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

#endif
