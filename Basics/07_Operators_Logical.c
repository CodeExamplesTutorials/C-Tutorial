/* (c) advancedprogramming.org / info@advancedprogramming.org */

#include <stdio.h>
#include <stdint.h>


int main(void)
{
	uint8_t bValue = 10;
	setvbuf(stdout, NULL, _IONBF, 0);

	if(10 > bValue && 8 < bValue)
	{
		printf("Value is 9\n");
	}

	if(10 == bValue || 9 == bValue)
	{
		printf("Value is 9 or 10\n");
	}

	if(!(10 == bValue))
	{
		printf("is not 10\n");
	}

  return 0;
}
