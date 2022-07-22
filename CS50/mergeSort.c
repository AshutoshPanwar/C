// Merge Sort
// Divide and Conquer
// Time Complexity: O(n logn)

#include <stdio.h>

// Function Declaration
void MergeSort( int arr[], int beg, int end );
void Merge( int arr[], int beg, int mid, int end );

// Driver code
int main()
{
    // Initialize array
    int arr[] = { 6, 5, 12, 10, 9, 1 };

    // Size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    MergeSort( arr, 0, n - 1);

    // Print array
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}


// Function Define MergeSort
void MergeSort( int arr[], int beg, int end )
{
    if (beg < end)
    {
    
        int mid =  (beg + end) / 2;
        MergeSort( arr, beg, mid);              // Recursive Function CAll
        MergeSort( arr, mid+1, end);            // Recursive Function CAll
        Merge( arr, beg, mid, end );            // Function call
    }
}


// Function Define for Merger
void Merge( int arr[], int beg, int mid, int end )
{
    // Temp array to store sorted elements
    int merger[end - beg + 1];

    // Initialize Variable
    int idx1 = beg;
    int idx2 = mid + 1;
    int x = 0;
    
    // Conquer elements
    while ( idx1 <= mid && idx2 <= end)
    {
        if (arr[idx1] < arr[idx2])
        {
            merger[x++] = arr[idx1++];
        }
        else
        {
            merger[x++] = arr[idx2++];
        }
    }
    
    // Special Conquer case when all elements all smaller then a element
    while ( idx1 <= mid)
    {
        merger[x++] = arr[idx1++];
    }
    while ( idx2 <= end)
    {
        merger[x++] = arr[idx2++];
    }
    
    // Copying elements from temp array to original array
    for (int i = 0; i < x; i++)
    {
        arr[beg++] = merger[i];
    }
    
}