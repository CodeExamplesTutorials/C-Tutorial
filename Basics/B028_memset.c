/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct LOCAL_RSC_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
  uint32_t u32Result;
}LOCAL_RSC_T;

int main(void)
{
  uint32_t u32Test = 1;
  LOCAL_RSC_T tRsc;

  memset(&tRsc, 0x0, sizeof(tRsc));
  memset(&u32Test, 0x0, sizeof(u32Test));

  memset(&tRsc, 0xFF, sizeof(tRsc));

  return 0;
}
