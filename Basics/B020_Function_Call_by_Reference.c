/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void Function(uint8_t* const pu8Value);

int main(void)
{
  uint8_t u8Value = 0;
  setvbuf(stdout, NULL, _IONBF, 0);

  Function(&u8Value);

  printf("Value: %"PRIu8"\n", u8Value);
  return 0;
}


void Function(uint8_t* const pu8Value)
{
  *pu8Value = 5;
}
