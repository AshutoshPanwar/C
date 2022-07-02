#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Take input from user
    int num = get_int("Enter a numebr : ");

    // Conditionals to check parity(even/odd)
    if (num % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}