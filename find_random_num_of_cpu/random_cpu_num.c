/*
    Guess the number of that the CPU chooses.
    User has a certain number of guess to guess the correct number
    Help user by providing a way to show if there guess is closer or farther from the correct number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char sel;              // if the user wants to continue playing or not.
    int num_of_guess = 10; // User has 10 attempts to guess the number.
    int user_guess = 0;

    int count = 0;
    

    while (sel != 'n' && sel != 'N')
    {
        int cpu_guess = rand() % 100; 

        printf("I am guessing a number between 0 and 100.\n");
        printf("Can you guess what it is?\n");


        while ((count != 10) || (user_guess == cpu_guess))
        {   
            printf("Input your guess: ");
            scanf("%d", &user_guess);
            if(user_guess > cpu_guess)
            {
                printf("You guess is greater than the CPU number.\n");
                count++;
            }
            else if(user_guess < cpu_guess)
            {
                printf("You guess is lower than the CPU number.\n");
                count++;
            }
            else if(user_guess == cpu_guess)
            {
                printf("Congraluations! You guess the correct number.\n");
                break;
            }
            
        }

        printf("Would you like to play again? Y/N ");
        scanf(" %c", &sel);
    }
    printf("Exiting Program!\n\n");
    return 0;
}