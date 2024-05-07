/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

static void SubFunction(uint8_t const u8Value);

int main(void)
{
  uint8_t u8Value = 5;
  setvbuf(stdout, NULL, _IONBF, 0);
  SubFunction(u8Value);

  return 0;
}

static void SubFunction(uint8_t const u8Value)
{
  printf("Value: %"PRIu8"\n", u8Value);
}
