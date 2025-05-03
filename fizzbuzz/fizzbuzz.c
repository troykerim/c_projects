#include <stdio.h>
#include <stdlib.h>

/*
def fizz(n):
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 3 == 0:
            print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
        else:
            print(i)
            
n = int(input("Enter a range: "))
fizz(n)
*/
void fizz(int x)
{
    for(int i = 0; i <= x; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    fizz(x);

    return 0;
}