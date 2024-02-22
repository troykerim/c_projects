/*
    
    Determines if the year is a leap year or not.
    
    User inputs a year.


    A leap year is divisible by 400 
    But a leap year is NOT divisible by 100
    If a leap year is not divisible by 100 but it is by 4
*/
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year and lets check if its a leap year or not: ");
    scanf("%d", &year);


    if(year % 400 == 0 || year % 4 == 0)
    {
        printf("\n%d is a leap year.", year);
    }
    /*else if(year % 100 == 0)
    {
        printf("\n%d is not a leap year.", year);
    }*/
    else
    {
        printf("\n%d is not a leap year.", year);
    }
    
    printf("\n");
    return 0;
}