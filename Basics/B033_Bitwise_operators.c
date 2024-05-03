/* (c) advancedprogramming.org*/
#include <stdlib.h>
#include <stdint.h>

#define BIT_0   0x00000001
#define BIT_1   0x00000002
#define BIT_2   0x00000004
#define BIT_3   0x00000008
#define BIT_4   0x00000010

int main()
{
  uint32_t u32Value = BIT_0;
  u32Value = u32Value | BIT_1;
  u32Value = u32Value & BIT_0;
  u32Value = ~u32Value;
  u32Value = u32Value ^ BIT_1;

  u32Value = BIT_0;
  u32Value = u32Value << 1;
  u32Value = u32Value >> 1;

  (void)u32Value;
}



