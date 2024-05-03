/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint8_t Function(uint8_t const u8Value);

int main(void)
{  uint8_t u8Value = 0;
   u8Value = Function(5);
   setvbuf(stdout, NULL, _IONBF, 0);

   printf("Value: %"PRIu8"\n", u8Value);
   return 0;
}


uint8_t Function(uint8_t const u8Value)
{
  uint8_t u8Result = u8Value + 3;
  return u8Result;
}
