/*
    Console input multiplication
    (You must use console)
    Ex input: $../multiplication/build ./multiply 5 6 + 
    Output: The result of the operation is 11
*/
#include <stdlib.h>
#include <stdio.h>
void main(int argc, char* argv[])
{
    int a, b, result;
    char ch;
    
    printf("Arguements entered: \n");
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    ch = *argv[3];
    printf("%d %d %c", a, b, ch);
    switch(ch)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;     
        default:
            printf("Enter a valid choice!");
    }
    printf("\nThe result of the operation is %d", result);
    printf("\n");
    //return 0;
}