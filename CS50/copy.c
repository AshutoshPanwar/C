#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc( strlen(s) + 1 );          // Allocating blank memory

    // for (int i = 0; i < strlen(s); i++)
    // {
    //     t[i] = s[i];                            // Copying data of s to t
    // }
    strcpy(t,s);                                // Sugar syntacting ^ same as above approch

    t[0] = toupper(t[0]);                       // Making changes to t(copy)

    printf("s: %s\n",s);                        // Original copy is untouched!
    printf("t: %s\n",t);
}