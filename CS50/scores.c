#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n = get_int("How many subjects: ");


    int score[n];       // Decleration of array

    for (int i = 0; i < n; i++)
    {
        score[i] = get_int("Score: ");
    }

    printf("Result: %.2f\n", (score[0] + score[1] + score[2])/3.0);
}