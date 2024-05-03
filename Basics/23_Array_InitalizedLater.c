/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  uint8_t au8Value[8] = {0};
  setvbuf(stdout, NULL, _IONBF, 0);

  au8Value[0] = 1;
  au8Value[1] = 3;
  au8Value[2] = 5;
  au8Value[3] = 2;
  au8Value[4] = 1;


  for(uint8_t u8Index = 0; u8Index < sizeof(au8Value)/sizeof(au8Value[0]); u8Index++)
  {
    if(0x0 == au8Value[u8Index])
    {
      break;
    }
    printf("Variable: %"PRIu8"\n", au8Value[u8Index]);
  }

  return 0;
}
