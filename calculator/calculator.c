/*
    Calculator that performs 5 operations: Add, sub, multiply, divide and remainder.
*/


#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiply(int a, int b);
double divide(double a, double b);
int modulus(int a, int b);
void quit();

int main()
{
    //char choice; // for While loop
    int selection; // for selecting which operation
    int a, b; // user input to be calculated on.
    while (selection != 6)
    {   
        printf("Welcome to my calculator.\n");
        printf("Here are you options:\n");
        printf("1.\tAddition\n");
        printf("2.\tSubtraction\n");
        printf("3.\tMultiplication\n");
        printf("4.\tDivision\n");
        printf("5.\tRemander\n");
        printf("6\tQuit\n");

        printf("\nInput 2 numbers so we can get started: ");
        scanf("%d %d", &a, &b);

        double c = a;
        double d = b;
        
        printf("\nNow that I have your 2 inputs, select an option from above (1-6): ");
        scanf("%d", &selection);
        if(selection == 0 || selection > 6)
        {
            printf("\n\nError, please input a number between 1 and 6!\n");
        }
        else if(selection == 1)
        {
            printf("\n\nThe addition of %d and %d is %d\n", a, b, addition(a,b));
        }
        else if(selection == 2)
        {
            printf("\n\nThe subtraction of %d and %d is %d\n", a, b, subtraction(a,b));
        }
        else if(selection == 3)
        {

            printf("\n\nThe multiplication of %d and %d is %d\n", a, b, multiply(a, b));
        }
        else if(selection == 4)
        {
 
            printf("\n\nThe division of %.1f and %.1f is %.1f\n", c, d, divide(c, d));
        }
        else
        {
            printf("\n\nThe remainder of %d and %d is %d\n", a, b, modulus(a, b));
        }


    }
    quit();
    return 0;
}

int addition(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int subtraction(int a, int b)
{
    int result;
    result = a - b;
    return result;
}

int multiply(int a, int b)
{

    return a*b;
}
double divide(double a, double b)
{
    return a/b;
}

int modulus(int a, int b)
{

    return a % b;
}


void quit()
{
    printf("Exiting Program\n");
}