#include <stdio.h>
#include <stdint.h>
uint32_t NumDigits(uint32_t x);

int main()
{
    uint32_t x; // Counter
    
    uint32_t result;
    
    printf("Enter a number: ");
    scanf("%u", &x);
    
    result = NumDigits(x);
    printf("The number of digits are: %d", result);

    return 0;
}
uint32_t NumDigits(uint32_t x)
{
    uint32_t count = 0;
    if(x == 0) // If user inputs 0, we need to return 0 
    {
        return count;
    }
    else
    {
        do
        {
            x /= 10;
            ++count;
        }while(x != 0);
        
    return count;
    }
}