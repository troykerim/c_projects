/*
    Display the sum of the series 1 + 1/2 + 1/3 + ... + 1/n
    Dipslay the series  
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    // Display the initial section of the series
    printf("\nSeries = 1 +");

    // Display the rest of the series
    for(i = 2; i <= n - 1; i++)
    {
        printf(" 1/%d +", i);
    }
    // Display the last term
    printf(" 1/%d", n);

    // Calculate the sum
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    // Display the sum
    printf("\nThe sum of the series is: %d\n", sum + 1/n);


    return 0;
}