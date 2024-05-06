/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
  uint8_t u8Value = 10;
  setvbuf(stdout, NULL, _IONBF, 0);

  if(10 > u8Value && 8 < u8Value)
  {
    printf("Value is 9\n");
  }

  if(10 == u8Value || 9 == u8Value)
  {
    printf("Value is 9 or 10\n");
  }

  if(!(10 == u8Value)) /* don't use this, use if(10 != u8Value) */
  {
    printf("is not 10\n");
  }

  return 0;
}
