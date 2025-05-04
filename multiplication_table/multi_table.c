/*
    Multiplication Table

    V1: Displays only up to the what the user input. Ex: n = 5, then only shows up to 5 x 5...
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    printf("---------------------------\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}