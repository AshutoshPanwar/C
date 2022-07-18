#include <stdio.h>

int main()
{
    // Variable Declaration
    float num1, num2, Result;
    int opt;


    // Prompting user to select a operator
    do
    {
    printf("Choose the operation you want to perform \n 1 - Addition(+)\n 2 - Subtraction(-)\n 3 - Multiplicatoin(*)\n 4 - Division(/)\n 5 - Modulus(%%)\n");
    scanf("%i", &opt);
    } while (opt > 5);


    // Prompting user for num input
    printf("Enter the two numebr: ");
    scanf("%f", &num1);
    scanf("%f", &num2);


    // Conditional Operation to perform on the basis of user selected operator
    if ( opt == 1)
    {
        printf("You Selected: Addition");
        Result = num1 + num2;                       // Adding Two numbers
        printf("Sum of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == 2)
    {
        printf("You Selected: Subtraction");
        Result = num1 - num2;                       // Subtraction Two numbers
        printf("Difference of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == 3)
    {
        printf("You Selected: Multiplicatoin");
        Result = num1 * num2;                       // Multiplying Two numbers
        printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == 4)
    {
        printf("You Selected: Division");
        Result = num1 / num2;                       // Dividing Two numbers
        printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else if ( opt == 5)
    {
        printf("You Selected: Modulus");
        Result = (int)num1 % (int)num2;             // Modulos of Two number
        printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, Result);
    }
    else
    {
        printf("Error: Invalid Operator!\n");
    }

    return 0;
}