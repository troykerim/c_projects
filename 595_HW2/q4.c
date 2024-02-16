/*

Write a C function that returns true if an ASCII character is a letter, and false
otherwise. The letters exist from 0x41 to 0x5A and from 0x61 to 0x7A inclusive. The
prototype for this function is:

int bLetter (char data);

*/
#include <stdio.h>

int bLetter(char data);

int main()
{
    
    char ch;// = 'A'; // Input
    
    printf("Enter a letter: ");
    scanf("%c", &ch);
    
    int result = bLetter(ch);
    
    if(result)
    {
        printf("%c is a letter.\n", ch);
    }
    else
        printf("%c is not a letter.\n", ch);
    
    return 0;
}

int bLetter(char data)
{
    return ((data >= 0x41 && data <= 0x5A) || (data >= 0x61 && data <= 0x7A));
}