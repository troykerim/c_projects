#include <stdio.h>
#include <stdlib.h>

// Sort function using Bubble Sort
int *sort(int size, int arr[])
{
    int i, j, temp;
    for(i = 0; i<size-1; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            if(arr[i] > arr[j+1])
            {
                temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int bin_search(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    
    while(low <= high)
    {
        int mid = (low + high) / 2; // Start at middle of array 
        if(arr[mid] == target)
        {
            return mid; 
        }
        else if (arr[mid] < target) 
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // If target was not found
}

int main()
{   
    // Create an Empty array 
    int size = 0;
    int target = 0; 
    printf("Enter a size: ");
    scanf("%d", &size);
    
    
    int *arr = (int*)malloc(size*sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }
    
    // Fill empty array
    for(int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("What is your target?: ");
    scanf("%d", &target);
    
    arr = sort(size, arr);
    
    int index = bin_search(arr, size, target);
    
    if (index != -1)
    {
        printf("\nTarget %d found at index %d.\n", target, index);
    }
    else 
    {
        printf("\nTarget %d was not found at any index.\n", target);
    }
    
    return 0;
}