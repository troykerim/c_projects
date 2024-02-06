/*

An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

9 = 9^1 = 9 (Armstrong number)
10 = 1^2 + 0^2 1 (not an armstrong number)
153 = 1^3 + 5^3 + 3^3 = 1 + 125 +27 = 153 (Armstong number)

Tasks: 
1. Count the number of digits the user input is
    Ex: 9 is 1 digit 
    10 is 2 digits
    55555 is 5 digits

2. Split the number up into sections. So 153 should be come 1, 5 and 3 individually.
    We need to save these numbers into an array.

4. Check if the calculation equals the original number.

*/
#include <stdio.h>
#include <math.h> // for pow()

int main() {
    int num, originalNum, remainder, result = 0;
    int digits = 0; // initialize number of digits to 0

    printf("Enter a number and let's see if it's an Armstrong number or not: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculates the number of digits in user input.
    while (originalNum != 0) {
        originalNum /= 10; // removes the last digit from the number
        digits++;
    }

    printf("\nFirst we need to check how many digits your number has.\n");
    printf("The number of digits in your number is: %d\n", digits);

    originalNum = num; // Reset originalNum for the calculation

    // Calculate the sum of the digits raised to the power of 'digits'
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num) {
        printf("\nYour number: %d is an Armstrong number!\n", num);
    } else {
        printf("\nYour number: %d is NOT an Armstrong number!\n", num);
    }
    return 0;
}