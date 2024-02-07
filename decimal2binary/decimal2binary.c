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
    int bin_num[8] = {0};  // Array to store all binary digits

    int i = 0;

    // Load data into bin_num array.  
    // Note: can also do bin_num[8] = {0,0,0,0,0,0,0,0} to remove while loop
    while(num > 0)
    {
        bin_num[i] = num % 2; // Converts a decimal value to binary
        num = num / 2;
        i++;
    }

    int bit = i;
    for(int j = bit - 1; j >= 0; j--)
    {
        printf("%d", bin_num[j]);
        if((bit - j) % 4 == 0 && j != 0)
        {
            printf("_");
        }
        
    }
}