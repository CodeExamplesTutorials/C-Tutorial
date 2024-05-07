/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

static uint8_t SubFunction(uint8_t const u8Value);

int main(void)
{  uint8_t u8Value = 0;
   u8Value = SubFunction(5);
   setvbuf(stdout, NULL, _IONBF, 0);

   printf("Value: %"PRIu8"\n", u8Value);
   return 0;
}

static uint8_t SubFunction(uint8_t const u8Value)
{
  uint8_t u8Result = u8Value + 3;
  return u8Result;
}
