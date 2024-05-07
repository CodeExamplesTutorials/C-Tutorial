/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>

static void SubFunction(void);

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  SubFunction();

  return 0;
}

static void SubFunction(void)
{
  printf("Function\n");
}

