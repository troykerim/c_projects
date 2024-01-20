/*
    This program counts the number of vowels in a word.

    Vowels are: A E I O U

    Future:
    Count the number of vowels in a sentence
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[30]; // User inputs a word with max size of 29.
    int count = 0; // Counter to keep track of number of vowels.
       
    printf("Enter a word\n");
    scanf("%s", str); 

    // Loop over entire string to check if a vowel is present
    for(int i = 0; str[i] != '\0'; ++i)
    {
        str[i] = tolower(str[i]);// Force string to be lower. 
        // Ex: Apple -> apple
        if(str[i] == 'a')
        {
            count++;
        }
        else if (str[i] == 'e')
        {
            count++;
        }
        else if (str[i] == 'i')
        {
            count++;
        }
        else if (str[i] == 'o')
        {
            count++;
        }
        else if (str[i] == 'u')
        {
            count++;
        }

    }
    // We need to also check for a words with no vowels 
    // before printing the final result
    if(count >= 1)
    {
        printf("Your word was: %s\n", str);
        printf("And it contained %d vowel(s)\n", count);
    }
    else
        printf("Your word was: %s and it contained no vowels\n", str);
    return 0;
}