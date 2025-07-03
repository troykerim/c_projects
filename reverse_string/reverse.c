#include <stdio.h>
#include <string.h>

void revString(char string[])
{
    int length = strlen(string);
    int i;
    char temp;
    for(i = 0; i < length / 2; i++)
    {
        temp = string[i]; // First element
        string[i] = string[length - i - 1]; // Replace 1st char with last char
        string[length - i - 1] = temp;
    }
}

int main()
{
    char string[100];
    printf("Enter a word: ");
    scanf("%s", string);
    printf("Here is your word: %s\n", string);
    revString(string);
    printf("Here is your word reversed: %s\n", string);
    return 0;
}