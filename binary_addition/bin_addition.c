/*
    Add 2 binary Numbers
*/
#include <stdio.h>

int main()
{
    long bin1, bin2;
    int i = 0, rem = 0, sum[20]; 
    
    
    printf("Enter the first binary number: ");
    scanf("%ld", &bin1);
    printf("Enter the second binary number: ");
    scanf("%ld", &bin2);
    while(bin1 != 0 || bin2 != 0)
    {
        sum[i++] = (bin1 % 10 + bin2 % 10 + rem) % 2;
        rem = (bin1 % 10 + bin2 % 10 + rem) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (rem != 0)
    {
        sum[i++] = rem;
    }
    --i;
    printf("Sum of two binary numbers: ");
    while(i >= 0)
    {
        printf("%d", sum[i--]);
    }
    printf("\n");
    return 0;
}