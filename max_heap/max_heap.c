#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyDown(int arr[], int size, int index)
{
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if(leftChild < size && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }
    if(rightChild < size && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }

    if (largest != index)
    {
        swap(&arr[index], &arr[largest]);
        heapifyDown(arr, size, largest);
    }
}
void buildMaxHeap(int arr[], int size)
{
    for(int i = size / 2 - 1; i >= 0; i--)
    {
        heapifyDown(arr, size, i);
    }

}
void display(int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    // unsorted
    int arr[] = {6, 1, 7, 2, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    display(arr, size);
    buildMaxHeap(arr, size);
    printf("Max Heap from array.\n");
    display(arr, size);


    int sortedarr[] = {19, 12, 8, 5, 4};
    int size2 = sizeof(sortedarr) / sizeof(sortedarr[0]);

    printf("Original sorted array: \n");
    display(sortedarr, size2);
    buildMaxHeap(sortedarr, size2);
    printf("Max Heap from sorted array.\n");
    display(sortedarr, size2);

    return 0;
}