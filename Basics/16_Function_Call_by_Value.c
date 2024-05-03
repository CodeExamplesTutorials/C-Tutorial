/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void Function(uint8_t const u8Value);

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  Function(5);

  return 0;
}


void Function(uint8_t const u8Value)
{
  printf("Value: %"PRIu8"\n", u8Value);
}
