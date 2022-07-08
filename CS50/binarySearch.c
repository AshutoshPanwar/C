// Binary Search
// **** Input array must be sorted ****
// if element found then return index
// else return -1
// Time Complexity: O(log n)

#include <stdio.h>
#include <cs50.h>


// Function declaration
int BinarySearch( int arr[], int low, int high, int key );


// Driver code
int main(void)
{
    int arr[] = { 5, 6, 7, 8, 9, 10, 11 };      // Sorted Array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = get_int("Key to be searched: ");
    int beg = 0, end = n;

    // Function call
    int result = BinarySearch( arr, beg, end, key);

    // Output
    (result == -1) ? printf("Key not found!") : printf("Key found at index %i\n",result);
}



// Function define
int BinarySearch( int arr[], int low, int high, int key )
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
            return BinarySearch( arr, low, high, key );
        }
        else
        {
            high = mid - 1;
            return BinarySearch( arr, low, high, key );
        }
    }
    return -1;
}