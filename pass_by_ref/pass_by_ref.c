/*
    Pass by reference, 
*/
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 5;
    int y = 10;
    printf("x: %d, y: %d\n", x,y);
    printf("Memory address of x: %p\nMemory address of y: %p\n", &x, &y);
    swap(&x, &y); // Passing the memory address of x and y, swap() will swap the memory addresses 
    printf("x: %d, y: %d\n", x,y);

    return 0;
}

// Takes in memory addresses that point to the values we want to swap
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}