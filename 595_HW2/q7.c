#include <stdint.h>
#include <stdio.h>

int32_t Quadratic(int32_t x);

int main()
{
    int32_t x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int32_t result = Quadratic(x);
    printf("The result is %d\n", result);
    return 0;
}

int32_t Quadratic(int32_t x)
{
    int64_t y = (int64_t)x*x*2 - (int64_t)x*3+1;
    if (y > (int64_t)0x7FFFFFF)
    {
        return 0x07FFFFFF; // Overflow threshold
    }
    else if(y < (int64_t)0x80000000)
    {
        return 0x80000000; // Underflow threshold
    }
    else
        return (int32_t)y;
}
