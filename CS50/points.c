#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Prompt for points you and user scored
    const int MINE = 2;
    int points = get_int("How many points did you lose: ");

    // Conditional for comparing marks
    if (points < MINE)
    {
        printf("You lose fewer points than me.");
    }
    else if (points > MINE)
    {
        printf("You lose more points than me.");
    }
    else
    {
        printf("We both lose the same points.");
    }
}