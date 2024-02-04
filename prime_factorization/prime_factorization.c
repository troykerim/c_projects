/*
*   Prime Factorization:

    User inputs a number, the program then displays all the prime factors
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    
    // Remove all even factors and display 2
    while(num % 2 == 0)
    {
        // Divide by 2 to remove all even factors
        printf("2 ");
        num = num / 2;
    }
    
    for(int i = 3; i*i <= num; i = i+2)
    {
        // While i divides num, print i and divide num
        while(num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }

    if(num > 2)
    {
        printf("%d", num);
    }
    printf("\n");

    return 0;
    
}