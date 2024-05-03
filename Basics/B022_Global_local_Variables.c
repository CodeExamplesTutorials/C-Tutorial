/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void Function(void);

uint8_t g_u8Value = 5;

int main(void)
{
  uint8_t u8Value = 3;
  setvbuf(stdout, NULL, _IONBF, 0);
  Function();

  printf("main (local variable) : %"PRIu8"\n", u8Value);
  printf("main (global variable): %"PRIu8"\n", g_u8Value);

  return 0;
}


void Function(void)
{
  uint8_t u8Value = 2;
  printf("function (local variable) : %"PRIu8"\n", u8Value);
  printf("function (global variable): %"PRIu8"\n", g_u8Value);
}


