#include <stdio.h>

int main()
{
    int unit_no;
    printf("Select one of the unit: \n1 - Temperature\n2 - Time\n3 - Mass\n");
    scanf("%i", &unit_no);

    if ( unit_no == 1 )
    {
        int opt;
        float temp, F, C;
        printf("Select \n1 - Celsius to Fahrenheit\n2 - Fahrenheit to Celsius\n");
        scanf("%i", &opt);

        printf("Enter the Temperature: ");
        scanf("%f", &temp);

        if ( opt == 1)
        {
            F = temp*(9/5) + 32;
            printf("%.2f in Celsius is %.2f in Fahrenheit\n", temp, F);
        }
        else if ( opt == 2 )
        {
            C = (temp - 32) * 5 / 9;
            printf("%.2f in Fahrenheit is %.2f in Celsius\n", temp, C);
        }
        else
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
    else if ( unit_no == 2 )
    {
        int opt, Time;
        float min, sec, hr;
        printf("Select:\n1 - Second to Minute\n2 - Minute to Hour\n3 - Second to Hour\n4 - Minute to Second\n5 - Hour to Minute\n6 - Hour to Second\n");
        scanf("%i", &opt);

        printf("Enter the Time: ");
        scanf("%i", &Time);

        if ( opt == 1 )
        {
            min = Time / 60;
            printf("%i Second = %.2f Minute\n", Time, min);
        }
        else if ( opt == 2)
        {
            hr = Time / 60;
            printf("%i Minute = %.2f Hour\n", Time, hr);
        }
        else if ( opt == 3)
        {
            hr = Time / 120;
            printf("%i Second = %.2f Hour\n", Time, hr);
        }
        else if ( opt == 4)
        {
            sec = Time * 60;
            printf("%i Minute = %.2f Second\n", Time, sec);
        }
        else if ( opt == 5)
        {
            min = Time * 60;
            printf("%i Hour = %.2f Minute\n", Time, min);
        }
        else if ( opt == 6)
        {
            sec = Time * 120;
            printf("%i Hour = %.2f Second\n", Time, sec);
        }
        else
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
    else if ( unit_no == 3 )
    {
        int opt, val;
        float gr, kg, mil;
        printf("Select:\n1 - Kilogram to Gram\n2 - Milligram to Kilogram\n3 - Milligram to Gram\n4 - Gram to Kilogram\n5 - Kilogram to Milligram\n6 - Gram to Milligram\n");
        scanf("%i", &opt);

        printf("Enter the Time: ");
        scanf("%i", &val);

        if ( opt == 1)
        {
            gr = val * 1000;
            printf("%i Kilogram = %.2f Gram\n", val, gr);
        }
        else if ( opt == 2)
        {
            kg = val / 1000000;
            printf("%i Milligram = %.2f Kilogram\n", val, kg);
        }
        else if ( opt == 3)
        {
            gr = val / 1000;
            printf("%i Milligram = %.2f Gram\n", val, gr);
        }
        else if ( opt == 4)
        {
            kg = val / 1000;
            printf("%i Gram = %.2f Kilogram\n", val, kg);
        }
        else if ( opt == 5)
        {
            gr = val * 1000000;
            printf("%i Kilogram = %.2f Milligram\n", val, gr);
        }
        else if ( opt == 6)
        {
            gr = val * 1000;
            printf("%i Gram = %.2f Milligram\n", val, gr);
        }
        else
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
}