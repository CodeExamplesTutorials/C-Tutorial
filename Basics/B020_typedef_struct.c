/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//typedef struct LOCAL_RSC_Ttag LOCAL_RSC_T;
//
//struct LOCAL_RSC_Ttag
//{
//  uint32_t u32Value1;
//  uint32_t u32Value2;
//  uint32_t u32Result;
////  LOCAL_RSC_T* ptRsc;
//};

typedef struct LOCAL_RSC_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
  uint32_t u32Result;
}LOCAL_RSC_T;


int main(void)
{
  LOCAL_RSC_T tRsc = {0};
  setvbuf(stdout, NULL, _IONBF, 0);

  tRsc.u32Value1 = 2;
  tRsc.u32Value2 = 4;

  tRsc.u32Result = tRsc.u32Value1  + tRsc.u32Value2;


  printf("Value: %"PRIu8"\n", tRsc.u32Result);

  return 0;
}


