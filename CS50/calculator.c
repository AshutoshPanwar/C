#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Prompt user for x
    long x = get_long("X: ");

    // Prompt user for y
    long y = get_long("Y: ");

    // perform Addition
    printf("%li\n", x+y);
}