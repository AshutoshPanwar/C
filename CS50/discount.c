#include <stdio.h>
#include <cs50.h>

// Sample declaration of function
float discout(float regular, int off_price);

int main(void)
{
    // Prompt user for input
    float regular_price = get_float("Regualr price: ");
    int off_price = get_int("Percent off: ");

    // Function calling
    float sale = discout(regular_price, off_price);

    printf("Discounted price: %.2f",sale);
}

// Function declaration
float discout(float regular, int off_price)
{
    return regular * (100 - off_price) / 100;
}