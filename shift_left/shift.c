/*
    Shift left by n bits
*/
#include <stdio.h>

int main()
{
    int x, n;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter the number of bits you want to shift: ");
    scanf("%d", &n);
    printf("\nYour original number: %d and your number shifted lift by %d bits is: %d\n", x, n, x << n);
    return 0;
}