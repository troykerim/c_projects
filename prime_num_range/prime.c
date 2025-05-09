/*
    The program takes the range and finds all the prime numbers between the range 
    and also prints the number of prime numbers.
    
    
    1. Take the range of numbers between which you have to find the prime numbers as input.
    2. Check for prime numbers only on the odd numbers between the range.
    3. Also check if the odd numbers are divisible 
       by any of the natural numbers starting from 2.
    4. Print the prime numbers and its count.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, i, j, flag, temp, count = 0;
    // 1. Take the range of numbers
    printf("Odd prime Numbers within a range.");
    printf("\nEnter the value of number 1 and number 2: \n");
    scanf("%d %d", &num1, &num2);
    
    if(num2 < 2)
    {
        printf("There are no primes up to %d\n", num2);
        exit(0);
    }
    
    printf("The odd prime numbers are: ");
    
    
    temp = num1;
    if(num1 % 2 == 0) // Check if the number is prime, if it is, increment
    {
        num1++;
    }
    for(i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        // Check only the odd prime numbers 
        for(j = 2; j <= i / 2; j++)
        {
            if((i % j) == 0) {
            flag = 1;
            break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    // 4. Print the prime numbers and the count
    printf("\nThe number of primes between %d & %d is %d\n", temp, num2, count);

    return 0;
}