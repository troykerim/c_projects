#include <stdio.h>
#include <stdint.h>

uint32_t Product(uint32_t n1, uint32_t n2);

int main()
{
    uint32_t n1, n2; // Counter
    
    uint32_t result;
    
    printf("Enter 2 numbers: ");
    scanf("%u %u", &n1, &n2);
    
    result = Product(n1, n2);
    printf("The product is: %u", result);

    return 0;
}
uint32_t Product(uint32_t n1, uint32_t n2)
{
    uint64_t result = (uint64_t)n1 * (uint64_t)n2;
    
    if(result > UINT32_MAX)
    {
        return 0xFFFFFFFF;
    }
    else
    {
        return result;
    }
}