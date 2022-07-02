#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Prompt user to agreed
    char c = get_char("Do you agree? [Y/N] ");

    // Conditonals
    if (c == 'y' || c == 'Y')
    {
        printf("Yes, you agree.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}