/*
    Program that calculates mean, median and mode

    Input should be an array integers based on a user input size.

    Formulas:
    mean = sum of all data / size of the data set

    median has 2 cases: odd or even based on size of data set

    Note: In order for median to work properly, the data array should be sorted.


    V2: In the future I would like to clean up this code.
*/
#include <stdio.h>

int mean(int size, int data[]);

int median(int size, int data[]);

int sort(int size, int data[]);

void swap(int *a, int *b);


int main()
{
    
    int size;

    printf("This program calculates mean, median mode.\n");
    printf("First we need a data set.\n");

    printf("How big is your data set? Input a size: ");
    scanf("%d", &size);

    int data[size];
    printf("\nNow input your data: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    sort(size, data);

    printf("\nYour data is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\nNow lets find the mean median and mode.\n");

    int mean_result = mean(size, data);
    
    printf("\nThe mean is ~%d\n", mean_result);

    int median_result = median(size, data);
    
    printf("\nThe median is ~%d\n", median_result);
    

    return 0;
}

int mean(int size, int data[])
{
    int sum, result;

    for(int i = 0; i < size; i++)
    {
        sum += data[i];
    }

    result = sum / size;
    return result;
}

int median(int size, int data[])
{
    //sort(size, data);
    // Need to check if the size of the data is even or odd.
    if(size % 2 == 0) // Even data set
    {
        return (data[size / 2 - 1] + data[size / 2]) / 2;
    }
    else // Odd data set
    {
        return data[size / 2];
    }
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sort(int size, int data[])
{
    // https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/
    int i, j, midpoint;

    for(i = 0; i < size; i++)
    {
        // Find the minimum element in the unsorted array
        midpoint = i;

        for(j = i + 1; j < size; j++)
        {
            if(data[j] < data[midpoint])
            {
                midpoint = j;
            }
            // Swap the minimum element with the 1st element
            swap(&data[midpoint], &data[i]);
        }
    }
    
}