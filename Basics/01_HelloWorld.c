/* (c) advancedprogramming.org / info@advancedprogramming.org */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);

  printf("Hello World");

  return 0;
}

