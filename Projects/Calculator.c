#include <stdio.h>

int main()
{
    int num1, num2, Result;
    char opt;

    printf("Choose the operation you want to perform +, -, *, / : ");
    scanf("%c", &opt);


    printf("Enter the two numebr: ");
    scanf("%i", &num1);
    scanf("%i", &num2);


    if ( opt == '+')
    {
        Result = num1 + num2;
        printf("Sum of %i and %i is %i\n", num1, num2, Result);
    }
    else if ( opt == '-')
    {
        Result = num1 - num2;
        printf("Difference of %i and %i is %i\n", num1, num2, Result);
    }
    else if ( opt == '*')
    {
        Result = num1 - num2;
        printf("Multiplication of %i and %i is %i\n", num1, num2, Result);
    }
    else if ( opt == '/')
    {
        Result = num1 - num2;
        printf("Multiplication of %i and %i is %i\n", num1, num2, Result);
    }
    else
    {
        printf("Error: Invalid Operator!");
    }

}