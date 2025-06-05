// Print n lines of 3 consecutive numbers starting from 1
#include <stdio.h>

int main()
{
    int a, i, j = 1, x = 0;
    printf("Input number of lines: ");
    scanf("%d", &a);
    
    // Loop for each line
    for(i = 1; i <= a; i++)
    {
        // Loop to print the 3 numbers in each line
        while(x < 3)
        {
            printf("%d ", j++);;
            x++;
        }
        x = 0; // reset the counter
        printf("\n");
    }

    return 0;
}