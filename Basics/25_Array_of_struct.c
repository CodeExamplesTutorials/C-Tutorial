/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct LOCAL_RSC_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
}LOCAL_RSC_T;


int main(void)
{
  LOCAL_RSC_T atRsc[4] = {{0}};
  setvbuf(stdout, NULL, _IONBF, 0);

  atRsc[0].u32Value1  = 2;
  atRsc[0].u32Value2 = 25;

  atRsc[1].u32Value1  = 5;
  atRsc[1].u32Value2 = 35;

  (void)atRsc;
  return 0;
}

