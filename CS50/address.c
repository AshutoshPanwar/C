#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;            // *p is the pointer that is used to store address of n
    // printf("%p\n", p);      // %p is the format code in c to print address

    // printf("%i\n", *p);     // *p here dereffering to value at that address



    // string s = "HI!";
    // printf("%c\n",s[0]);
    // printf("%c\n",s[1]);
    // printf("%c\n",s[2]);
    // printf("%c\n",s[3]);

    // printf("%s\n", s);



    // char *s = "HI!";            // No difference b/w string and char *
    // printf("%s", s);



    // string s = "Hi!";
    // char c = s[0];                  // We made the copy of s[0]
    // char *p = &s[0];                // In this case no copy was created so both s and p are pointing to the same address
    // printf("%p\n", s);
    // printf("%p\n", p);



    // char *s = "Hi!";
    // printf("%p\n", s);
    // printf("%p\n", &s[0]);              // This proves that string is a pointer that stores the address of first letter of string
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]);



    // char *s = "Hi!";
    // printf("%c\n", s[0]);              // This proves that string is a pointer that stores the address of first letter of string
    // printf("%c\n", s[1]);
    // printf("%c\n", s[2]);
    // printf("%c\n", s[3]);



    // Pointer arithmatic
    char *s = "Hi!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));               // Syntactic sugar s[1] = *(s + 1)
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
}