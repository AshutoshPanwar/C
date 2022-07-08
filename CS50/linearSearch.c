// Linear Search
// Search an element in a unsorted array
// return index if key found
// return -1 if key not found
// Time complexity O(n)

#include <stdio.h>
#include <cs50.h>


// Function declaratoin
int LinearSearch(int arr[],int n, int key);


// Driver code
int main(void)
{
    // Prompt user for input
    int size = get_int("Enter the size of array: ");
    int arr[size];

    int key = get_int("Key to be searched: ");

    for (int i = 0; i < size; i++)
    {
        arr[i] = get_int("Element[%i]: ",i);
    }


    // Function calling
    int result = LinearSearch(arr, size, key);


    // Output result
    (result == -1) ? printf("Key not found!") : printf("Key found at index: %i\n",result);
}



// Function define for linear search
int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}