/* (c) advancedprogramming.org / info@advancedprogramming.org */

#include <stdint.h>

int main(void)
{
  uint8_t  ubValue = 0;
  uint16_t usValue = 0;
  uint32_t ulValue = 0;
  uint64_t ullValue = 0;

  ubValue  = 0xFF;
  usValue  = 0xFFFF;
  ulValue  = 0xFFFFFFFF;
  ullValue = 0xFFFFFFFFFFFFFFFF;

 (void)ubValue;
 (void)usValue;
 (void)ulValue;
 (void)ullValue;

  return 0;
}
