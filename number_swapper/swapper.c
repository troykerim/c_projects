/*
1. Take a number as an input 
2. Reverse the number & store in it an array
3. Using a loop check if the array[i] is greater than array[i+1]. If if is, interchange them
4. Print number in the array after swapping the number 

INput as 2323 and gives output 2332

*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int find(int);
int evaluate(int [], int);

int main()
{
    int num, result;

    printf("Enter a number: "); // Enter
    scanf("%d", &num);
    
    result = find(num);
    if(result)
    {
        printf("The number greater than %d and made of same digits is %d.\n", num, result);
    }
    else
    {
        printf("No higher value possible. Either all numbers are same or the digits of the numbers entered are in decreasing order.\n");
    }
    return 0;
}

int find(int num)
{
    int digit[20];
    int i = 0, len = 0, n, temp;
    
    n = num;
    while(n != 0)
    {
        digit[i] = n % 10;  // Find remainder, # of digits
        n = n / 10;         // Decrement loop based on # of digits
        i++;                // Count number of iterations
    }
    len = i;
    
    // Swap, if the ith position is greater than the next position, do swap
    for(i = 0; i < len - 1; i++)
    {
        if(digit[i] > digit[i+1])
        {
            temp = digit[i];
            digit[i] = digit[i+1];
            digit[i+1] = temp;
            return (evaluate(digit, len));
        }
    }
    return 0; // If no swap occurred, return 0 for the if() back in main()
}


// Multiply array elements with power of 10 and add all values to get the required number
int evaluate(int digit[], int len)
{
    int i, num = 0;
    for(i = 0; i < len; i++)
    {
        num += digit[i] * pow(10, i);
    }
    return num;
}