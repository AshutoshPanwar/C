

#include <stdio.h>

int main()
{
    int M_size, opt;
    printf("Enter the size of square matrix: ");
    scanf("%i", &M_size);

    printf("Enter the elements for the first Matrix: \n");
    float arr1[M_size][M_size];
    for (int i = 0; i < M_size; i++)
    {
        for (int j = 0; j < M_size; j++)
        {
            scanf("%f",&arr1[i][j]);
        }
    }

    printf("Enter the element for the second Matrix: \n");
    float arr2[M_size][M_size];
    for (int i = 0; i < M_size; i++)
    {
        for (int j = 0; j < M_size; j++)
        {
            scanf("%f",&arr2[i][j]);
        }
    }

    printf("Select the operation you want to perform:\n1 - Addition(+)\n2 - Subtration\n3 - Multiplication(*)\n4 - Swapping(A <-> B)\n");
    scanf("%i",&opt);

    if ( opt == 1 )
    {
        float tmp_mx[M_size][M_size];

        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                tmp_mx[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("New Added Array: \n");
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                printf("%.0f ", tmp_mx[i][j]);
            }
            printf("\n");
        }
    }
    else if (opt == 2)
    {
        float tmp_mx[M_size][M_size];
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                tmp_mx[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
        printf("New Subtracted Array: \n");
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                printf("%.0f ", tmp_mx[i][j]);
            }
            printf("\n");
        }
    }
    else if (opt == 3)
    {
        float tmp_mx[M_size][M_size];
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                tmp_mx[i][j] = arr1[i][j] * arr2[j][i];
            }
        }
        printf("New Multiplied Array: \n");
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                printf("%.0f ", tmp_mx[i][j]);
            }
            printf("\n");
        }
    }
    else if (opt == 4)
    {
        float tmp_mx[M_size][M_size];

        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                tmp_mx[i][j] = arr1[i][j];
                arr1[i][j] = arr2[i][j];
                arr2[i][j] = tmp_mx[i][j];
            }
        }
        printf("New Swapped Array: \n");
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                printf("%.0f ", arr1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (int i = 0; i < M_size; i++)
        {
            for (int j = 0; j < M_size; j++)
            {
                printf("%.0f ", arr2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error: Choose a valid operation!\n");
        return 1;
    }
}