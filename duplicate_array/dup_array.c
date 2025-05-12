/*
    Write a C program to identify duplicate elements in an array 
    and replace them with a sentinel value, such as -1


    NOTES: Check for duplicates after array has been built
           Use a seperate for loop to iterate over the array and check for dupes

*/
#include <stdio.h>
int main()
{
    int n[5], i, j, x;
    
    
    printf("Input the 5 members of the array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        int is_duplicate = 0;
        for(j = 0; j < i; j++)
        {
            if(n[j] == x)
            {
                is_duplicate = 1;
                break;
            }
        }
        
       if(is_duplicate)
       {
           n[i] = -1;
       }
       else
       {
           n[i] = x;
       }
    }
    // Print the array values
    printf("Array values are: \n");
    for(i = 0; i < 5; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }
    return 0;
}