/*
    Count the number of positive and negative numbers based on a dynamic size
*/

#include <stdio.h>
int main()
{
    int neg_count = 0, pos_count = 0;
    int n, input;
    printf("Counting the number of positive and negative numbers.\n");
    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &input);
        if(input >= 0)
        {
            pos_count++;
        }
        else
            neg_count++;
    }

    printf("\nThe number of positive numbers: %d", pos_count);
    printf("\nThe number of negative numbers: %d", neg_count);
    printf("\n");
    return 0;
}