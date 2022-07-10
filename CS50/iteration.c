// Draw a pattern like:
// #
// # #
// # # #

#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Function declaration
void draw(int n);

int main(void)
{
    // Prompt user for input
    int height = get_int("Height: ");

    // Function calling
    draw(height);
}



// Function define
void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    
}