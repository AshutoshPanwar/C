#include <stdio.h>
#include <cs50.h>


// Function declaration
void draw(int n);


int main(void)
{
    int height = get_int("Height: ");

    draw(height);                       // Function calling
}


// Function Define
void draw(int n)
{
    if (n <= 0)                         // Base Case
    {
        return;
    }

    draw(n-1);                          // Recursive calling to function

    for (int i = 0; i < n; i++)
    {
        printf("# ");
    }
    printf("\n");
}