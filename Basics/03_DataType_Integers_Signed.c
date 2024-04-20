/* (c) advancedprogramming.org / info@advancedprogramming.org */

#include <stdio.h>
#include <stdint.h>


int main(void)
{
  int8_t   bValue = 0;
  int16_t  sValue = 0;
  int32_t  lValue = 0;
  int64_t  llValue = 0;

  bValue =  0x7F;
  bValue =  0x80;
  bValue =  0xFF;
  bValue =  0xFE;

  sValue =  0x7FFF;
  sValue =  0x8000;
  sValue =  0xFFFF;
  sValue =  0xFFFE;

  lValue =  0x7FFFFFFF;
  lValue =  0x80000000;
  lValue =  0xFFFFFFFF;
  lValue =  0xFFFFFFFE;

  llValue = 0x7FFFFFFFFFFFFFFF;
  llValue = 0x8000000000000000;
  llValue = 0xFFFFFFFFFFFFFFFF;
  llValue = 0xFFFFFFFFFFFFFFFE;

 (void)bValue;
 (void)sValue;
 (void)lValue;
 (void)llValue;

  return 0;
}
