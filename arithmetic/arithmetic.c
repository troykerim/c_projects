/* 
    Arithimetic sequence
    Sum all numbers within the sequence
*/
#include <stdio.h>
int main()
{
    //int first_term = 1; // Start at 
    int step = 1;       // Step size
    int sum = 0;
    int size;           // How big you want the sequnce
    printf("Enter a size: ");
    scanf("%d", &size);
    
    // int seq[size]; // place after size has been taken
    
    printf("\nArithmetic Sequence: ");
    for(int i = 0; i < size; i++)
    {
        // printf("%d ", first_term + i * step);
        printf("%d ", 1 + i * 1);

        // sum += seq[i];
    }
    
    for (int i = 1; i <= size; ++i) 
    {
        sum += i;
    }
    printf("\nSum of the squence is: %d\n", sum);

    return 0;
}
