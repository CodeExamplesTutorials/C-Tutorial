/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t u8Value = 10;
	setvbuf(stdout, NULL, _IONBF, 0);

	if(10 > u8Value)
	{
		printf("Smaller 10\n");
	}

	if(10 >= u8Value)
	{
		printf("Smaller or equal 10\n");
	}

	if(10 == bValue)
	{
		printf("Identical 10\n");
	}

	if(10 != u8Value)
	{
		printf("Not 10\n");
	}

	if(10 < bValue)
	{
		printf("\n");
	}

	if(10 <= bValue)
	{
		printf("Smaller or equal 10\n");
	}


  return 0;
}
