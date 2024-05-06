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

void Function(LOCAL_RSC_T* const ptRsc);

int main(void)
{
  LOCAL_RSC_T tRsc = {0};
  setvbuf(stdout, NULL, _IONBF, 0);

  tRsc.u32Value1 = 2;
  tRsc.u32Value2 = 4;

  Function(&tRsc);

  printf("Value: %"PRIu8"\n", tRsc.u32Result);

  return 0;
}


void Function(LOCAL_RSC_T* const ptRsc)
{
  ptRsc->u32Result = ptRsc->u32Value1 + ptRsc->u32Value2;
}
