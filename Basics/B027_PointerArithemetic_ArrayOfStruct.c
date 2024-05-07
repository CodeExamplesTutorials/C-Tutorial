/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct LOCAL_RSC_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
  uint32_t u32Result;
}LOCAL_RSC_T;

void Function(LOCAL_RSC_T* const patRsc, uint32_t const u32NumValues);

int main(void)
{
  LOCAL_RSC_T atRsc[4] = {{0}};
  setvbuf(stdout, NULL, _IONBF, 0);

  atRsc[0].u32Value1  = 2;
  atRsc[0].u32Value2 = 25;

  atRsc[1].u32Value1  = 5;
  atRsc[1].u32Value2 = 35;

  Function(&atRsc[0], sizeof(atRsc)/sizeof(atRsc[0]));

  printf("Value1: %"PRIu8"\n", atRsc[0].u32Result);
  printf("Value2: %"PRIu8"\n", atRsc[1].u32Result);

  return 0;
}


void Function(LOCAL_RSC_T* const patRsc, uint32_t const u32NumValues)
{
  for(uint8_t u8Index = 0; u8Index < u32NumValues; u8Index++)
  {
    patRsc[u8Index].u32Result = patRsc[u8Index].u32Value1 + patRsc[u8Index].u32Value2;
  }
}
