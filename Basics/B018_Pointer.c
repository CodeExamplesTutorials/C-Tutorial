/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{  uint8_t   u8Value = 1;
   uint8_t*  pu8Value = NULL;

   setvbuf(stdout, NULL, _IONBF, 0);

   pu8Value = &u8Value;

   printf("Value: %"PRIu8"\n", u8Value);
   printf("Value: %"PRIu8"\n", *pu8Value);

   *pu8Value = 5;

   printf("Value: %"PRIu8"\n", u8Value);
}

