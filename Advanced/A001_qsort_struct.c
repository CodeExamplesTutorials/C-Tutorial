/* (c) advancedprogramming.org / info@advancedprogramming.org*/

#include <stdlib.h>
#include <stdint.h>


#define STRING_1 "Test1"
#define STRING_2 "Test2"
#define STRING_3 "Test3"
#define STRING_4 "Test4"
#define STRING_5 "Test5"
#define STRING_6 "Test6"


typedef struct EXAMPLE_Ttag{
  uint32_t u32ID;
  char*    pszName;
}EXAMPLE_T;

static void AddElement(EXAMPLE_T* const ptList, uint32_t* const pulListEntries, uint32_t u32ID, char* String);
int Compare(const void* pvLeft, const void* pvRight);

int main()
{
  EXAMPLE_T tList[20] = {0};
  uint32_t ulListEntries = 0;

  AddElement(&tList[0], &ulListEntries, 28, STRING_1);
  AddElement(&tList[1], &ulListEntries, 19, STRING_2);
  AddElement(&tList[2], &ulListEntries, 18, STRING_3);
  AddElement(&tList[3], &ulListEntries,  7, STRING_4);
  qsort(tList, ulListEntries, sizeof(EXAMPLE_T), Compare);
  AddElement(&tList[4], &ulListEntries,  5, STRING_5);
  qsort(tList, ulListEntries, sizeof(EXAMPLE_T), Compare);
  AddElement(&tList[5], &ulListEntries, 14, STRING_6);
  qsort(tList, ulListEntries, sizeof(EXAMPLE_T), Compare);

  return 0;
}


static void AddElement(EXAMPLE_T* const ptList, uint32_t* const pulListEntries, uint32_t u32ID, char* String)
{
  ptList->u32ID    = u32ID;
  ptList->pszName = String;
  (*pulListEntries)++;
}


int Compare(const void* pvLeft, const void* pvRight)
{
  const EXAMPLE_T* const ptLeft = pvLeft;
  const EXAMPLE_T* const ptRight = pvRight;
  return (ptLeft->u32ID - ptRight->u32ID);
}
