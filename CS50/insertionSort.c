// Insertion Sort
// Insert an element to it's correct position by moving the elements
// TIme Complexity: O(n^2)


#include <stdio.h>


// Function Decleration
void InsertionSort(int arr[], int n);


// Driver code
int main()
{
    // Initialize array
    int arr[] = { 98, 54, 53, 18, 21, 12 };

    // Size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);                  // Functon Call

    // Print Output
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}


// Function Define
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)                 // Consider first element as the key
    {
        for (int j = 0; j < i; j++)             // Iterating all elements before arr[i];
        {
            if (arr[j] > arr[i])                // Putting element to it's right place
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}