/*
Two pointer technique to find if there is a pair in A[0... N-1] with a given sum.

TODO: Change array to a dynamic array

*/

#include <stdio.h>
#include <stdlib.h>

// qsort implementation to sort the array
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int isPairSum(int arr[], int n, int x)
{
    int i = 0;          // 1st pointer
    int j = n - 1;      // 2nd pointer

    while(i < j)
    {
        // If a pair is found
        if(arr[i] + arr[j] == x)
        {
            return 1;
        }
        else if(arr[i] + arr[j] < x)
        {
            i++;
        }
        else
            j--;
    }
    return 0;
}

int main()
{
    int arr[] = {3, 5, 9, 2, 8, 10, 11};
    int target = 17;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    // Sort the array before applying two-pointer technique
    qsort(arr, arrSize, sizeof(int), compare);

    // Print result
    int result = isPairSum(arr, arrSize, target);
    printf("\nResult is: %d\n", result);  


    return 0;
}

