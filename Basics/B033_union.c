/* (c) advancedprogramming.org */
#include <stdlib.h>
#include <stdint.h>

typedef struct EXAMPLE_Ttag{
  uint8_t u8Value;
  union{
    uint32_t u32ID;
    uint32_t u32Test;
    uint8_t  u8Test;
  }uSame;
}EXAMPLE_T;


int main()
{
  EXAMPLE_T tExample = {0};

  tExample.uSame.u32ID   = 300;
  tExample.uSame.u8Test  = 20;
  tExample.uSame.u32Test = 23;

  (void)tExample;
}
