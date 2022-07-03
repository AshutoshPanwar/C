#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Prompt user for x
    float x = get_float("X: ");

    // Prompt user for y
    float y = get_float("Y: ");

    // perform Addition
    printf("%.2f\n", x+y);
}