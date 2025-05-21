// list of squares
#include <stdio.h>

int main()
{
    int i, x; // range;
    printf("Enter a range: ");
    scanf("%d", &x);
    printf("\nList of square of each even value from 1 to %d\n", x);
    for(i = 1; i <= x; i++)
    {
        if(i % 2 == 0)
        {
            printf("\n%d^2 = %d",i, i*i);
        }
    }
    printf("\n");
    return 0;
}