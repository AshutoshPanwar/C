#include <stdio.h>
#include <cs50.h>

// Making function
void Meow(int n);    //Leaving bread crumbs

int main(void)
{
    int num = get_int("Enter a numebr: ");
    Meow(num);
}

// Function decleration
void Meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("Mewo!\n");
    }
}