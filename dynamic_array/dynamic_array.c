/*
    Dynamic Array Example
*/
#include <stdlib.h>
#include <stdio.h>


int main()
{
    int size;
    int* arr = (int*)malloc(size*sizeof(int));
    
    printf("Enter a size: ");
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Your array:\n[ "); 
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    
    free(arr);
    return 0;
}