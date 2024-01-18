// Check if a number is prime or not

// V1 Have the user enter in 1 number, not use a function

// V2 Rewrite the code so that it uses a function

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n;
    bool isPrime = true;

    printf("Enter a number greater than 1 to check if it is prime or not.\n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Enter a number greater than 1.\n");

    }
    else
    {
        for (int i = 2; i <= sqrt(n); ++i)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        
    }
    if(isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}