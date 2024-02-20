#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int bTwoDigit(uint32_t x);

int main()
{
    uint32_t x;
    
    printf("Enter a number: ");
    scanf("%u", &x);
    
    if(bTwoDigit(x))
    {
        printf("It is true.\n");
    }
    else
        printf("It is false.\n");

    return 0;
}

int bTwoDigit(uint32_t x)
{
    if((x >= 10) && (x < 99))
    {
        return true;
    }
    else
        return false;
}
