/*

Write a C function to returns the absolute value of a number. The input is signed,
but the output will be unsigned.

*/


#include <stdio.h>
#include <stdlib.h>

int absolute(int* n);

int main()
{
    int n; // int datatype can accept both signed and unsiged

    printf("Enter a number: ");
    scanf("%d", &n);

    absolute(&n);

    printf("\nHere is your number: %d", n);

    return 0;
}

int absolute(int* n)
{
    *n = abs(*n);
}