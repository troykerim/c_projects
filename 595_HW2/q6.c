#include <stdio.h>
#include <stdint.h>

int32_t Max(int32_t n1, int32_t n2, int32_t n3);

int main()
{
    int32_t n1, n2, n3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int32_t result = Max(n1, n2, n3);
    
    printf("The maximum of your 3 input numbers was %d", result);
    

    return 0;
}

int32_t Max(int32_t n1, int32_t n2, int32_t n3)
{
    //int32_t n1, n2, n3;
    
    if((n1 > n2) && (n1 > n3))
    {
        return n1;
    }
    else if((n2 > n1) && (n2 > n3))
    {
        return n2;
    }
    else
        return n3;
}