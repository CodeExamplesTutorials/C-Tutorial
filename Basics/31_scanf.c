/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
#ifndef _WIN32
  uint8_t  u8Value  = 0;
  int8_t   i8Value  = 0;
#endif

  uint16_t u16Value = 0;
  uint32_t u32Value = 0;
  uint64_t u64Value = 0;

  int16_t  i16Value = 0;
  int32_t  i32Value = 0;
  int64_t  i64Value = 0;

  setvbuf(stdout, NULL, _IONBF, 0);

#ifndef _WIN32
  printf("Input uint8_t: ");
  scanf("%"SCNu8, &u8Value);
  printf("uint8_t: %"PRIu8"\n", u8Value);

  printf("Input int8_t: ");
  scanf("%"SCNd8, &i8Value);
  printf("int8_t: %"PRId8"\n", i8Value);
#endif

  printf("Input uint16_t: ");
  scanf("%"SCNu16, &u16Value);
  printf("uint16_t: %"PRIu16"\n", u16Value);

  printf("Input int16_t: ");
  scanf("%"SCNd16, &i16Value);
  printf("int16_t: %"PRId16"\n", i16Value);

  printf("Input uint32_t: ");
  scanf("%"SCNu32, &u32Value);
  printf("uint32_t: %"PRIu32"\n", u32Value);

  printf("Input int32_t: ");
  scanf("%"SCNd32, &i32Value);
  printf("int32_t: %"PRId32"\n", i32Value);

  printf("Input uint64_t: ");
  scanf("%"SCNu64, &u64Value);
  printf("uint64_t: %"PRIu64"\n", u64Value);

  printf("Input int64_t: ");
  scanf("%"SCNd64, &i64Value);
  printf("int64_t: %"PRId64"\n", i64Value);

  return 0;
}
