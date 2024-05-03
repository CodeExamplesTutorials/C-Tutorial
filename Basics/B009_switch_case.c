/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
  uint8_t u8Value = 1;

  setvbuf(stdout, NULL, _IONBF, 0);

  switch(u8Value)
  {
  case 0:
	  printf("value set to 0\n");
	  break;

  case 1:
	  printf("value set to 1\n");
	  break;

  default:
	  printf("not expected\n");
	  break;
  }

  return 0;
}
