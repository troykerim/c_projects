/*
    Count the number of words in a sentence

    User inputs a words (string) that make up a sentence
    Program will count the number of words that are in the sentence.
*/
#include <stdio.h>
#include <string.h>


void counter(const char sentence[])
{
    int i, count = 0;  // final result
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if((sentence[i] != ' ' && sentence[i+1] == ' ') || (sentence[i+1] == '\0' && sentence[i] != ' '))
        count++;
    }
    printf("The number of words in your sentence is: %d\n", count);
}

int main()
{
    char sentence[500]; // User sentence

    printf("Enter a sentence: ");
    //scanf("%s", sentence);
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    printf("\nHere is input your sentence:\n%s\n", sentence);
    
    counter(sentence);
    

    return 0;
}