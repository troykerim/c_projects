/*
    Collatz conjecture

    User inputs a number, this program produces all of its hailstone values
    ending when it reaches 1. 

    We need an array to keep track of all numbers found.
    Therefore it needs to be dynamic, given that 7 has 28 permutations for example

    Don't need to check for the 4 2 1  loop
    As long as the number that is calculated = 1 then we are done
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int steps = 0; // Count number permutations 
    
    printf("Enter a number: ");
    scanf("%d", &n);

    // Allocate memory for Array tracker

    int *sequence = malloc(sizeof(int));
    if(sequence == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    sequence[steps] = n; // sequence contains the user input number at array position 0 (1st position)

    while(n > 1)
    {
        // Collatz conjecture operation 
        if(n % 2 == 0) // if n is even do 1st operation
        {
            n = n / 2;
        }
        else // otherwise do the 2nd operation
        {
            n = 3 * n + 1;
        }

        // increase the step counter
        steps++;

        // Dynamically change the size sequence, in case the number gets really large
        
        int *temp = realloc(sequence, (steps+1)*sizeof(int));
        if(temp == NULL)
        {
            fprintf(stderr, "Reallocation failed\n");
            free(sequence);
            return 1;
        }
        sequence = temp;
        sequence[steps] = n; 
        // ^ array position incremented by 1 spot, array also has a new size, lasted calculation on n is now saved in the array.
    } 
         

    printf("Here are the Halestone numbers:\n");
    for (int i = 0; i<= steps; i++)
    {
        printf("%d ", sequence[i]);
    }
    printf("\n");
    free(sequence);



    return 0;
}