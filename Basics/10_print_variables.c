/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  uint8_t  u8Value  = 1;
  uint16_t u16Value = 2;
  uint32_t u32Value = 18;
  uint64_t u64Value = 4;

  int8_t   i8Value  = 5;
  int16_t  i16Value = 6;
  int32_t  i32Value = 7;
  int64_t  i64Value = 8;

  setvbuf(stdout, NULL, _IONBF, 0);

  printf("uint8_t : %"PRIu8"\n", u8Value);
  printf(" int8_t : %"PRId8"\n", i8Value);

  printf("uint16_t: %"PRIu16"\n", u16Value);
  printf(" int16_t: %"PRId16"\n", i16Value);

  printf("uint32_t: %"PRIu32"\n", u32Value);
  printf(" int32_t: %"PRId32"\n", i32Value);

  printf("uint64_t: %"PRIu64"\n", u64Value);
  printf(" int64_t: %"PRId64"\n", i64Value);

  printf("uint32_t: 0x%X\n", u32Value);
  printf("uint32_t: 0x%08X\n", u32Value);

  return 0;
}
