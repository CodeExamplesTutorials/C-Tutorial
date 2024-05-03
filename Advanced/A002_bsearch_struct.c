/* (c) advancedprogramming.org / info@advancedprogramming.org */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct EXAMPLE_Ttag{
  uint32_t u32ID;
  char*    pszName;
}EXAMPLE_T;


EXAMPLE_T atList[] = {{1, "Test"}, {3, "Hello"}, {4, "World"}, {5,"C"}, {7,"Found"}};

int Compare(const void* pvLeft, const void* pvRight);

int main()
{
  EXAMPLE_T* ptSearchIndex = NULL;
  const EXAMPLE_T tFind = {3, NULL};
  ptSearchIndex = bsearch(&tFind, atList, sizeof(atList) / sizeof(atList[0]), sizeof(atList[0]), Compare);

  printf("Index : %"PRIu32" - %s\n", ptSearchIndex->u32ID, ptSearchIndex->pszName);

  return 0;
}

int Compare(const void* pvLeft, const void* pvRight)
{
  const EXAMPLE_T* const ptLeft = pvLeft;
  const EXAMPLE_T* const ptRight = pvRight;
  return (ptLeft->u32ID - ptRight->u32ID);
}
