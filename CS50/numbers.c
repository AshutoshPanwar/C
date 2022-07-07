// Linear search
// Unsorted array

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number[] = {4, 6, 8, 2, 7, 5, 0};
    for (int i = 0; i < 7; i++)
    {
        if (number[i] == 0)
        {
            printf("Number Fount at index %i", i+1);
            return 0;
        }
    }
    printf("Numebr Not Found!");
    return 1;
}