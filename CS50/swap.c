#include <stdio.h>

void swap( int *a, int *b );                    // Function declaration with two pointer as input

int main(void)
{
    int x = 1;
    int y = 2;

    printf( "x is %i, y is %i\n", x, y );
    swap( &x, &y );                             // Address passing to pointers
    printf( "x is %i, y is %i\n", x, y );       // If pointers are not used then a copy of variables will be passed
}



// Function define to swap two integers using temp variable
void swap( int *a, int *b )                     // Without pointers swap will happen and will be limited to local scope only
{
    int temp = *a;
    *a = *b;
    *b = temp;
}