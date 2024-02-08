/*
    Interation  Output number:
    n = 1,      fib = 0
    n = 2,      fib = 1
    n = 3,      fib = 1
    n = 4,      fib = 2
    n = 5,      fib = 3

*/
#include <stdio.h>

void printFib(int num);

int main()
{
    int num; 
    printf("Total sum for a Fibonnaci sequence.\n");
    printf("Enter size: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    else{
        printFib(num);
    }
    // printf("The total sum for the fibonnaci seequence of %d is %d \n",num, fib(num));

    return 0;
}

void printFib(int num)
{
    int a = 0, b = 1, next;

    printf("Fibonnaci sequence up to term %d is: ", num);
    for(int i = 0; i<num; i++)
    {
        if(i == 0)
        {
            printf("%d", a);
        }
        else if(i == 1)
        {
            printf(", %d", b);
        }
        else{
            next = a + b;
            a = b;
            b = next;
            printf(", %d", next);
        }
    }
    printf("\n");
}

