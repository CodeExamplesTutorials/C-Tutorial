/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
  uint8_t u8Value = 1;

  setvbuf(stdout, NULL, _IONBF, 0);

  if(0 == u8Value)
  {
	  printf("value set to 0\n");
  }
  else if(1 == u8Value)
  {
	  printf("value set to 1\n");
  }
  else
  {
	  printf("not expected\n");
  }

  return 0;
}
