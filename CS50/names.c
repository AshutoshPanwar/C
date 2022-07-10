// Linear search
// Search for name in array
// Time Complexity = O(n)

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name[] = {"ashu", "roy","virat", "pranav","pragati", "khusboo" };

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(name[i], "roy") == 0)                // strcmp() function to compare two string values
        {
            printf("Name found at index %i", i);
            return 0;
        }
    }
    printf("Not found");
    return 1;
}