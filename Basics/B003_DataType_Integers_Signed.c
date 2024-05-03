/* (c) advancedprogramming.org */
#include <stdint.h>

int main(void)
{
  int8_t   i8Value = 0;
  int16_t  i16Value = 0;
  int32_t  i32Value = 0;
  int64_t  i64Value = 0;

  i8Value =  0x7F;
  i8Value =  0x80;
  i8Value =  0x81;
  i8Value =  0xFF;
  i8Value =  0xFE;

  i16Value =  0x7FFF;
  i16Value =  0x8000;
  i16Value =  0xFFFF;
  i16Value =  0xFFFE;

  i32Value =  0x7FFFFFFF;
  i32Value =  0x80000000;
  i32Value =  0xFFFFFFFF;
  i32Value =  0xFFFFFFFE;

  i64Value = 0x7FFFFFFFFFFFFFFF;
  i64Value = 0x8000000000000000;
  i64Value = 0xFFFFFFFFFFFFFFFF;
  i64Value = 0xFFFFFFFFFFFFFFFE;

 (void)i8Value;
 (void)i16Value;
 (void)i32Value;
 (void)i64Value;

  return 0;
}
