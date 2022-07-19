// Bubble sort
// Largest element is bubbled and moved to the last
// Time Complexity O(n^2)

#include <stdio.h>
#include <cs50.h>

// Function declaration for bubble sort
void BubbleSort(int arr[], int n);
void swap(int *a, int *b);


// Driver code
int main(void)
{
    int arr[] = { 13, 32, 26, 35, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);                            // Function call

    // Printing output
    for (int i = 0; i < n; i++)
    {
        printf("%i ",arr[i]);
    }
    printf("\n");
}


// Function define for bubble sort
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);           // If left element >  right element then swap
            }
        }
    }

}


// Function define for swapping two numbers
void swap(int *a, int *b)                           // Call by reference
{
    int temp = *a;
    *a = *b;
    *b = temp;
}