/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

#define EXAMPLE_VALUE1   1
#define EXAMPLE_VALUE2   2

int main(void)
{
  uint32_t u32Value = EXAMPLE_VALUE1;

  setvbuf(stdout, NULL, _IONBF, 0);

  if(EXAMPLE_VALUE2 == u32Value)
  {
    printf("equal\n");
  }

  printf("uint32_t: %"PRIu32"\n", u32Value);

  return 0;
}
