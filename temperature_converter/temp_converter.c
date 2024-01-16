// Basic temperature Converter.
#include <stdio.h>

int main()
{
    int num = 0;
    double result = 0;
    printf("Input a number in Fahrenheit: ");
    scanf("%d", &num);
    result =(num - 32) * (5.0/9.0);
    
    printf("\n%d degrees fahrenheit is %d degrees celsius\n", num, (int)result);

    /*
    int num = 0;
    printf("Hello World!\n");
    
    printf("Input a number: ");
    scanf("%d", &num);
    printf("\nYour number is: %d\n", num);
    */
    return 0;
}