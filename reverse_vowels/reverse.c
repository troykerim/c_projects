#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);  // make case-insensitive
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void reverseVowels(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Move left index to next vowel
        while (left < right && !isVowel(str[left]))
            left++;

        // Move right index to previous vowel
        while (left < right && !isVowel(str[right]))
            right--;

        // Swap vowels
        if (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    //fgets(str, sizeof(str), stdin);

    // Remove newline character if present
   // str[strcspn(str, "\n")] = '\0';

    reverseVowels(str);

    printf("String with vowels reversed: %s\n", str);

    return 0;
}