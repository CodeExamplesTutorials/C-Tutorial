/* (c) advancedprogramming.org */
#include <stdint.h>

int main(void)
{
	uint8_t u8Value1 = 20;
	uint8_t u8Value2 = 2;
	uint8_t u8Result = 0;

	u8Result = u8Value1 + u8Value2;
	u8Result = u8Value1 - u8Value2;
	u8Result = u8Value1 * u8Value2;
	u8Result = u8Value1 / u8Value2;

	u8Result = u8Value1 % u8Value2;
	u8Value2 = u8Value1 + 1;
	u8Result = u8Value1 % u8Value2;

	(void)u8Result;
  return 0;
}
