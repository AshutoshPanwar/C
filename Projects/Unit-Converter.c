// Unit Convertor for Temperature, Time, Mass, Lenght;

#include <stdio.h>


// Driver Code
int main(void)
{
    // Prompt user to select the unit
    int unit_no;
    printf("Select one of the unit: \n1 - Temperature\n2 - Time\n3 - Mass\n4 - Length\n");
    scanf("%i", &unit_no);

    if ( unit_no == 1 )                 // If user select Temperature
    {
        int opt;
        float temp, F, C;
        printf("Select \n1 - Celsius to Fahrenheit\n2 - Fahrenheit to Celsius\n");
        scanf("%i", &opt);

        printf("Enter the Temperature: ");
        scanf("%f", &temp);

        if ( opt == 1)                              // If user select option 1.1
        {
            F = temp*(9/5) + 32;
            printf("%.2f in Celsius is %.2f in Fahrenheit\n", temp, F);
        }
        else if ( opt == 2 )                        // If user select option 1.2
        {
            C = (temp - 32) * 5 / 9;
            printf("%.2f in Fahrenheit is %.2f in Celsius\n", temp, C);
        }
        else                                        // If user enter unknown character in option 1
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
    else if ( unit_no == 2 )                    // If user select Time
    {
        int opt, Time;
        float min, sec, hr;
        printf("Select:\n1 - Second to Minute\n2 - Minute to Hour\n3 - Second to Hour\n4 - Minute to Second\n5 - Hour to Minute\n6 - Hour to Second\n");
        scanf("%i", &opt);

        printf("Enter the Time: ");
        scanf("%i", &Time);

        if ( opt == 1 )                             // If user select option 2.1
        {
            min = Time / 60;
            printf("%i Second = %.2f Minute\n", Time, min);
        }
        else if ( opt == 2)                         // If user select option 2.2
        {
            hr = Time / 60;
            printf("%i Minute = %.2f Hour\n", Time, hr);
        }
        else if ( opt == 3)                         // If user select option 2.3
        {
            hr = Time / 120;
            printf("%i Second = %.2f Hour\n", Time, hr);
        }
        else if ( opt == 4)                         // If user select option 2.4
        {
            sec = Time * 60;
            printf("%i Minute = %.2f Second\n", Time, sec);
        }
        else if ( opt == 5)                         // If user select option 2.5
        {
            min = Time * 60;
            printf("%i Hour = %.2f Minute\n", Time, min);
        }
        else if ( opt == 6)                         // If user select option 2.6
        {
            sec = Time * 120;
            printf("%i Hour = %.2f Second\n", Time, sec);
        }
        else                                        // If user enter unknown character in option 2
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
    else if ( unit_no == 3 )                    // If user select Mass
    {
        int opt, val;
        float gr, kg, mil;
        printf("Select:\n1 - Kilogram to Gram\n2 - Milligram to Kilogram\n3 - Milligram to Gram\n4 - Gram to Kilogram\n5 - Kilogram to Milligram\n6 - Gram to Milligram\n");
        scanf("%i", &opt);

        printf("Enter the Time: ");
        scanf("%i", &val);

        if ( opt == 1)                              // If user select option 3.1
        {
            gr = val * 1000;
            printf("%i Kilogram = %.2f Gram\n", val, gr);
        }
        else if ( opt == 2)                         // If user select option 3.2
        {
            kg = val / 1000000;
            printf("%i Milligram = %.2f Kilogram\n", val, kg);
        }
        else if ( opt == 3)                         // If user select option 3.3
        {
            gr = val / 1000;
            printf("%i Milligram = %.2f Gram\n", val, gr);
        }
        else if ( opt == 4)                         // If user select option 3.4
        {
            kg = val / 1000;
            printf("%i Gram = %.2f Kilogram\n", val, kg);
        }
        else if ( opt == 5)                         // If user select option 3.5
        {
            gr = val * 1000000;
            printf("%i Kilogram = %.2f Milligram\n", val, gr);
        }
        else if ( opt == 6)                         // If user select option 3.6
        {
            gr = val * 1000;
            printf("%i Gram = %.2f Milligram\n", val, gr);
        }
        else                                        // If user enter unknown character in option 3
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
    else if (unit_no == 4)                  // If user select Length
    {
        int val, opt;
        float km, m, cm;
        printf("Select:\n1 - Kilometer to Meter\n2 - Meter to Centimeter\n3 - Kilometer to Centimeter\n4 - Meter to Kilometer\n5 - Centimeter to Meter\n6 - Centimeter to Kilometer\n");
        scanf("%i", &opt);

        printf("Enter the Time: ");
        scanf("%i", &val);

        if ( opt == 1)                                  // If user select option 4.1
        {
            m = val * 1000;
            printf("%i Kilometer = %.2f Meter\n", val, m);
        }
        else if ( opt == 2)                             // If user select option 4.2
        {
            cm = val * 100;
            printf("%i Meter = %.2f Centimeter\n", val, cm);
        }
        else if ( opt == 3)                             // If user select option 4.3
        {
            cm = val * 100000;
            printf("%i Kilometer = %.2f Centimeter\n", val, cm);
        }
        else if ( opt == 4)                             // If user select option 4.4
        {
            km = val / 1000;
            printf("%i Meter = %.2f Kilometer\n", val, km);
        }
        else if ( opt == 5)                             // If user select option 4.5
        {
            m = val / 100;
            printf("%i Centimeter = %.2f Meter\n", val, m);
        }
        else if ( opt == 6)                             // If user select option 4.6
        {
            km = val / 100000;
            printf("%i Centimeter = %.2f Kilometer\n", val, km);
        }
        else                                            // If user enter unknown character in option 4
        {
            printf("ERROR!: Unknown Character!\n");
            return 1;
        }
    }
    else                    // If user enter unknown character
    {
        printf("ERROR!: Unknown Character!\n");
        return 1;
    }
}