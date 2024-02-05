/*
    In this prime number project:

    User enters a number as a size
    Program returns 1 prime number from input number
    Prompt user if they would like another prime number or to exit


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }
    return 1; // If the number is prime
}

int num_generation(int n)
{
    int rand_num = 2 + rand() % (n - 2);
    return rand_num;
}

int main()
{
    srand(time(NULL));
    int size;

    printf("Random Prime Number generator!\n");
    printf("Enter a number, preferebly a large one, and lets generate and random number: ");
    scanf("%d", &size);

    if (size <= 2)
    {
        printf("Please enter a number greater than 2.\n");
        return 1;
    }

    int prime_num;
    do
    {
        prime_num = num_generation(size);
    } while (!is_prime(prime_num));

    printf("\nHere is a random prime number: %d\n", prime_num);

    return 0;
}