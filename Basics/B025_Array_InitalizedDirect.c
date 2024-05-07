/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  uint8_t au8Value[] = {5, 6, 3, 5, 2, 1, 7};
  setvbuf(stdout, NULL, _IONBF, 0);

  for(uint8_t u8Index = 0; u8Index < sizeof(au8Value)/sizeof(au8Value[0]); u8Index++)
  {
    printf("Variable: %"PRIu8"\n", au8Value[u8Index]);
  }

  return 0;
}
