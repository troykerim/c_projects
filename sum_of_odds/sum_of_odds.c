// Odd numbers sum
#include <stdio.h>
#include <stdlib.h>  

int main()
{
    int i, numbers[5], total = 0;
    printf("Enter 5 numbers below: ");
    for(i = 0; i < 5; i++) {
        printf("\nInput number #%d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            printf("Error: %d is not an odd number. Exiting.\n", numbers[i]);
            exit(1);  // Exit the program with a non-zero status
        }
    }

    // All numbers passed the odd check
    for(i = 0; i < 5; i++) {
        total += numbers[i];
    }

    printf("\nSum of all odd values: %d\n", total);
    return 0;
}