/*Find all divisors of a given integer

Write a C program that reads and prints the elements of an array of length 5. 
Before printing, replace every negative number, zero, with 100
*/
#include <stdio.h>

int main()
{
    int n[5], i, x;
    printf("Input the 5 members of the array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if(x > 0)
        {
           n[i] = x; 
        }
        else
        {
            n[i] = 100;
        }
    }
    printf("Array values are: \n");
    for(i = 0; i < 5; i++)
    {
        printf("n[%d] = %d\n", i, n[i]);
    }

    return 0;
}