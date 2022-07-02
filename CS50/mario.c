#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    // Prompt user for input
    do
    {
        n = get_int("Width: ");
    } while (n < 1);                // Repeat till user enter a positive value

    // for no of rows
    for (int i = 0; i < n; i++)
    {
        // for no of columns
        for (int j = 0; j < n; j++)
        {
            // print the character
            printf("# ");
        }
        printf("\n");
    }
}