/* (c) advancedprogramming.org */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_NONE          0
#define ERROR_OUT_OF_MEMORY 1

typedef struct LOCAL_RSC_Ttag
{
  uint32_t u32Value1;
  uint32_t u32Value2;
}LOCAL_RSC_T;

int32_t AllocStorage(LOCAL_RSC_T** const pulRsc);
void     FreeStorage(LOCAL_RSC_T** const ppulRsc);

int main()
{
  int32_t  i32Result = ERROR_NONE;
  LOCAL_RSC_T* pulRsc = NULL;

  i32Result = AllocStorage(&pulRsc);

  if(0 == i32Result)
  {
    /* Implement Handling */
  }

  if(NULL != pulRsc)
  {
    FreeStorage(&pulRsc);
  }

  return i32Result;
}

int32_t AllocStorage(LOCAL_RSC_T** const ppulRsc)
{
  int32_t i32Result = ERROR_NONE;

  *ppulRsc = calloc(1, sizeof(**ppulRsc));

  if(NULL == *ppulRsc)
  {
    i32Result = ERROR_OUT_OF_MEMORY;
  }

  return i32Result;
}

void FreeStorage(LOCAL_RSC_T** const ppulRsc)
{
  if(NULL != ppulRsc &&
     NULL != *ppulRsc)
  {
    free(*ppulRsc);
    *ppulRsc = NULL;
  }
}
