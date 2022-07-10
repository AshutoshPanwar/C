#include <stdio.h>
#include <stdlib.h>                         // Library in whick malloc() function is defined

int main(void)
{
    int *x = malloc( 3 * sizeof(int) );     // Allocating 3 box of type int where int is of 4 bytes in general!

    // Initializing values
    x[1] = 72;
    x[2] = 73;
    x[3] = 74;
}