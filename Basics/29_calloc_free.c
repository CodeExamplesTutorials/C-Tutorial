/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct LOCAL_RSC_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
  uint32_t u32Result;
}LOCAL_RSC_T;

int main(void)
{
  int32_t i32Result = 0;
  LOCAL_RSC_T* ptRsc = NULL;

  ptRsc = calloc(1, sizeof(*ptRsc));
  if(NULL == ptRsc)
  {
    i32Result = 1;
  }

  if(0 == i32Result)
  {
    /* Implement handling */
  }

  if(NULL != ptRsc)
  {
    free(ptRsc);
    ptRsc = NULL;
  }
  return i32Result;
}



