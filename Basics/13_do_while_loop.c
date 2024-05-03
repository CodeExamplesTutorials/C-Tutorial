/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  uint8_t u8Index = 0;
  setvbuf(stdout, NULL, _IONBF, 0);

  do
  {
    printf("uint8_t : %"PRIu8"\n", u8Index);
    u8Index++;
  }
  while(u8Index < 5);

  return 0;
}
