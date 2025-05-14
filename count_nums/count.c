/*
    Count the number of positive and negative numbers in 5 inputs
*/

#include <stdio.h>
int main()
{
    int neg_count = 0, pos_count = 0;
    int n = 5; // Number of inputs allowed
    int input;

    for(int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &input);
        if(input >= 0)
        {
            pos_count++;
        }
        else if(input < 0)
        {
            neg_count++;
        }
    }

    printf("\nThe number of positive numbers: %d", pos_count);
    printf("\nThe number of negative numbers: %d", neg_count);
    printf("\n");

    return 0;
}