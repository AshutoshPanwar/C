#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *i = get_string("I: ");        // char * and string are same thing because both are pointers
    char *j = get_string("J: ");

    if ( strcmp(i, j) == 0 )            // Function to compare two strings
    {
        printf("Same!\n");
    }
    else
        printf("Different!\n");
}