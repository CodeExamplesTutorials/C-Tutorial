/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void Function(uint8_t const u8Value);

int main(void)
{
  uint8_t u8Value = 5;
  setvbuf(stdout, NULL, _IONBF, 0);
  Function(u8Value);

  return 0;
}


void Function(uint8_t const u8Value)
{
  printf("Value: %"PRIu8"\n", u8Value);
}
