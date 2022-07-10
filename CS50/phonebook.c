#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct                          // Defining our own data type person!
{
    string name;
    string number;
}
person;


int main(void)
{
    person people[2];                   // Declaring variable



    // Initializing Variables
    people[0].name = "Ashu";
    people[0].number = "1234567890";

    people[1].name = "pranav";
    people[1].number = "0987654321";


    // Linear search
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Ashu") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found!");


    return 1;
}