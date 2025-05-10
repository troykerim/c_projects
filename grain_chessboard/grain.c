/*
    Calculate the number of grains of wheat on a chessboard. 
    
    From: https://exercism.org/tracks/c/exercises/grains

    A chessboard has 64 squares. Square 1 has one grain, square 2 has two grains, square 3 has four grains, and so on, doubling each time.

    Write code that calculates:

    1. the number of grains on a given square
    2. the total number of grains on the chessboard
    
    If the user selects 5, then, 1 + 2 + 3 + 4 + 5 = 15
    After looking up what this is "math" property is, it is an Arithmetic sequence
*/

#include <stdio.h>

// 1. the number of grains on a given square
int sequence(int size)
{
    int sum = 0;
    for(int i = 1; i <= size; i++) // start at 1 and not 0
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int sum = 0;
    int squares = 64;       // Total number of squares
    int size;
    
    printf("There are 64 squares on a chessboard.\n");
    printf("Square 1 has 1 piece of grain on it.\n");
    printf("Each subsequent square has an additional grain\n");
    
    // 2. the total number of grains on the chessboard
    for (int i = 1; i <= squares; ++i) 
    {
        sum += i;
    }
    printf("\nTotal number of grains on the chessboard: %d", sum);

    // 1. the number of grains on a given square
    printf("\n\nLet's find how many grains are on a given square.\n");
    printf("Enter a number: ");
    scanf("%d", &size);
    printf("\nThe number of grains on a given square %d is: %d\n", size, sequence(size));
    return 0;
}
