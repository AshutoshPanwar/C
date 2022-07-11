#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    // Dynamically allocate an array of size 3
    int *list = malloc( 3 * sizeof(int) );

    if ( list == NULL )
    {
        return 1;
    }
    
    // Assign three numbers to array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;


    // Time passes

    // Resize array to be size of 4
    int *tmp = realloc(list, 4* sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    

    // Add 4th number to array
    tmp[3] = 4;

    // Remember new array
    list = tmp;

    // Print new array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n" , list[i]);
    }
    
    free(list);
    return 0;
}