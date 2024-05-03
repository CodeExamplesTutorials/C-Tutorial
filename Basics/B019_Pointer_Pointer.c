/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  uint8_t   u8Value = 1;
  uint8_t*  pu8Value = NULL;
  uint8_t** ppu8Value = NULL;

  setvbuf(stdout, NULL, _IONBF, 0);

  pu8Value = &u8Value;
  ppu8Value = &pu8Value;

  printf("Value: %"PRIu8"\n", u8Value);
  printf("Value: %"PRIu8"\n", *pu8Value);
  printf("Value: %"PRIu8"\n", **ppu8Value);
}

