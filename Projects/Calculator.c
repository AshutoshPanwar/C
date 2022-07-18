#include <stdio.h>

int main()
{
    float num1, num2, Result;
    char opt;

    printf("Choose the operation you want to perform +, -, *, /, %% : ");
    scanf("%c", &opt);


    printf("Enter the two numebr: ");
    scanf("%f", &num1);
    scanf("%f", &num2);


    if ( opt == '+')
    {
        printf("You Selected: Addition");
        Result = num1 + num2;
        printf("Sum of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == '-')
    {
        printf("You Selected: Subtraction");
        Result = num1 - num2;
        printf("Difference of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == '*')
    {
        printf("You Selected: Multiplicatoin");
        Result = num1 * num2;
        printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == '/')
    {
        printf("You Selected: Division");
        Result = num1 - num2;
        printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == '%')
    {
        printf("You Selected: Modulus");
        Result = num1 - num2;
        printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else
    {
        printf("Error: Invalid Operator!\n");
    }

    return 0;
}