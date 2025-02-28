#ifndef _BigNumber_H
#define _BigNumber_H
/*
 *  BigNumber.h
 *
 * Created : 2/28/2025 17:21:02
 * Author : Mohamad Hoseyn Meymandi
 * Contact : https://github.com/something-Constant



  available Fonts:  Big:  3*2
  
                    Others: 2*2{
                      Real,
                      Classic,
                      Square,
                      Angled,
                      Digital,
                      DigitalPars
                    }
*/


/*
  the Hd44780 Library of your choice,
  if the library is changed need to modify 
  the "BigNumberinit()" , "BigNumberPrint()", "BigNumberClaer()".
*/
#include "../LCD/lcd.h"

/*
    defined Font
*/
#define Digital


enum Numberes{
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


void BigNumberinit(void);
void BigNumberPrint(char number, char start);
void BigNumberClaer(char start);
void BigNumberBlink(char value, char start, unsigned int on_time, unsigned int off_time,
                    unsigned int *time);

#endif
