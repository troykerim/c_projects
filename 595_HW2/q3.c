/*

Write a C function that returns a true if an ASCII character is a hex digit, otherwise
return false. Hex digits are 0x30 to 0x39 and 0x41 to 0x46 inclusive.

In ASCII 0x30 to 0x39 means integers 0 to 9
0x41 to 0x46 means letters A to F

Hex uses 0-9 and A-F

*/

#include <stdbool.h>
#include <stdio.h>

bool isHexDigit(char ch);

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    bool isHex = isHexDigit(ch);

    if(isHex) // if true, recieves a 1 to make it true
    {
        printf("%c is a hex digit.\n", ch);
    }
    else
    {
        printf("%c is not a hex digit.\n", ch);
    }

    return 0;
}

bool isHexDigit(char ch)
{
    if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F'))
    {
        return true;
    }
    else
        return false;
}



