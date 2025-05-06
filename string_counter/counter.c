/*
    Count the number of characters in a sting.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    //scanf() stops at \t, spaces & \n

    // Use fgets for entire sentences (including spaces)
    fgets(str, sizeof(str), stdin); // this is typical format (code) for using fgets.

    // Remove the newline character from fgets
    str[strcspn(str, "\n")] = 0;

    count = strlen(str);
    printf("The number of characters in the string is: %d\n", count);

    return 0;
}