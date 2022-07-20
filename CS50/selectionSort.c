// Bubble Sort
// Find the smallest element and
// swap it with element in the begining
// Time Complexity O(n^2)


#include <stdio.h>

// Function Declaration
void SelectionSort(int arr[], int n);


// Driver code
int main(void)
{
    int arr[] = { 64, 25, 15, 22, 11 };
    int n = sizeof( arr ) / sizeof( arr[0] );

    SelectionSort(arr, n);                      // Function call

    // Print output
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Function Define
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])                // swap smallest element with element at begining
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}