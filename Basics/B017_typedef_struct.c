/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct LOCAL_VAL_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
}LOCAL_VAL_T;

typedef struct LOCAL_RSC_Ttag
{
  LOCAL_VAL_T tValues;
  uint32_t    u32Result;
}LOCAL_RSC_T;

int main(void)
{
  LOCAL_RSC_T tRsc = {0};
  setvbuf(stdout, NULL, _IONBF, 0);

  tRsc.tValues.u32Value1 = 2;
  tRsc.tValues.u32Value2 = 4;

  tRsc.u32Result = tRsc.tValues.u32Value1  + tRsc.tValues.u32Value2;

  printf("Value: %"PRIu8"\n", tRsc.u32Result);

  return 0;
}
