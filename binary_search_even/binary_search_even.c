#include <stdio.h>
#include <stdlib.h>

int *sort(int size, int arr[], int* new_size)
{
    int i, j;
    int count = 0;
    int *temp = (int*)malloc(size*sizeof(int));
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0) // if(arr[i] % 2 == 0) for removing odd
        {       
            temp[count++] = arr[i];
        }
    }
    
    
    for(i = 0; i< count-1; i++)
    {
        for(j = 0; j < count-i-1; j++)
        {
            if(temp[j] > temp[j+1])
            {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    *new_size = count;
    return temp;
}

int main()
{
    int size, new_size;
    printf("Sorting an array and removing any even numbers.\n");
    printf("Enter the size for your array: ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size*sizeof(int));
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int *int_sort = sort(size, arr, &new_size); 
    
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", int_sort[i]);
    }
    printf("\n");
    free(int_sort);
    return 0;
}