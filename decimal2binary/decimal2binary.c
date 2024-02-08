/*
    Decimal to binary convert for 8 bit digits

    Includes an underscore for readability.

    V2: Change the size 
*/

#include <stdio.h>
#include <stdint.h>


void dec2bin(uint8_t num);

int main()
{
    uint8_t num;
    printf("Enter a decimal number: ");
    scanf("%hhd", &num);

    dec2bin(num);
    printf("\n");
    return 0;
}

void dec2bin(uint8_t num)
{
    int bin_num[8];  // Array to store all binary digits

    // Initializing the array.
    for(int i = 0; i < 8; i++)
    {
        bin_num[i] = 0;
    }

    // Load data into bin_num array.
    int i = 0;
    while(num > 0)  
    {
        bin_num[i] = num % 2; // Converts a decimal value to binary
        num = num / 2;
        i++;
    }

    int bit = i;
    for(int j = 7; j >= 0; j--) // Start at 7 downto 0
    {
        printf("%d", bin_num[j]);
        if((7 - j + 1) % 4 == 0 && j != 0) // Check the position of the bit from right most side
        {
            printf("_");
        }
        
    }
}