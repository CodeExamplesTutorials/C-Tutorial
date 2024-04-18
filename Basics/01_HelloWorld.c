/* (c) advancedprogramming.org / info@advancedprogramming.org */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
#ifdef __WIN32
    setvbuf(stdout, NULL, _IONBF, 0); /* required for Eclipse on Windows not to buffer stdout */
#endif

    printf("Hello World");

    return 0;
}

