/*
    Prime Number Checker

    A prime number is a number that has only 2 factors: 1 & itself

    Q1. How do we determine what the factors are for a number?

*/

#include <stdio.h>


int main()
{
    int num, result, flag = 0;

    printf("Enter a number to check if its prime or not: ");
    scanf("%d", &num);

    printf("\nHere are the factors of %d: \n", num);
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    if(num == 0 || num == 1)
    {
        flag = 1;
    }

    for(int i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // If flag is 0, then number is prime
    if(flag == 0)
    {
        printf("%d is a prime number. ", num);
    }
    else
    {
        printf("%d is not a prime number. ", num);
    }

    return 0;
}