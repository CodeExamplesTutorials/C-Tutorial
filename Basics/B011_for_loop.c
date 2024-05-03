/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);

  for(uint8_t u8Index = 0; u8Index < 5; u8Index++)
  {
    printf("uint8_t : %"PRIu8"\n", u8Index);
  }

  return 0;
}
