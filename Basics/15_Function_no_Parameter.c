/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>

void Function(void);


int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  Function();

  return 0;
}


void Function(void)
{
  printf("Function\n");
}
