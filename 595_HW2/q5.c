/*

Write a C function to calculate the average of three numbers. Assume the three
numbers are passed by value into your function. The prototype for this function is:

int32_t Average(int32_t n1, int32_t n2, int32_t n3);

*/

#include <stdio.h>
#include <stdint.h>

int32_t Average(int32_t n1, int32_t n2, int32_t n3);

int main()
{
    int32_t n1, n2, n3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int32_t result = Average(n1, n2, n3);
    
    printf("The average is: %d", result);

    return 0;
}

int32_t Average(int32_t n1, int32_t n2, int32_t n3)
{
    return (n1+n2+n3) / 3;   
}