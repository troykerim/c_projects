/*

Write a C function to calculate the equation:
y = 1000/x – (3*x+1)/4

Assuming x and y are 32-bit numbers. Return y = 0x7FFFFFF (2 31 -1) if the input
value is zero, otherwise you can ignore overflow.

*/

#include <stdio.h>
#include <stdint.h>  // For uint32_t
#include <limits.h>  // For INT_MAX

int equation(uint32_t x, uint32_t y);

int main()
{
    uint32_t x, y, result;

    printf("Enter 2 numbers: ");
    printf("\nx= ");
    scanf("%d", &x);


    printf("\ny= ");
    scanf("%d", &y);

    result = equation(x, y);
    printf("The result of the equation is: %d\n", result);

    return 0;
}

int equation(uint32_t x, uint32_t y)
{
    if(x == 0 && y == 0)
    {
        return y = INT_MAX;
    }
    y = (1000 / x) - ((3*x+1) / 4);
    return y;
}