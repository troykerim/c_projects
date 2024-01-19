/*
    Rock Paper Scissors

    2 players: User and CPU
    

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char choice;
    char userLetter; // r = rock, p = paper, s = scissor
    char cpuLetter;
    int cpuChoice; 
    int userChoice;

    /*
    printf("Would you like to play the game Y or N?\n");
    scanf("%c", &choice);
    while(choice != 'n' || choice != 'N')
    {
        printf("You are Playing the game!\n");
        printf("Do you want to play again? Y or N\n");
        scanf("%c", &choice);
        if(choice == 'n' || choice == 'N')
            break;
    }
    */
    // printf("You exited the game!\n");
    
    cpuChoice = rand() % 3 + 1;

    printf("The cpu chose: %d\n", cpuChoice);

    printf("Make a selection.\n");
    printf("1 for rock, 2 for paper, 3 for scissors: ");
    scanf("%d", &userChoice);

    if(userChoice == 1 && cpuChoice == 1)
    {
        userLetter = 'r';
        cpuLetter = 'r';
    }
    else if (userChoice == 2 && cpuChoice == 2)
    {
        userLetter = 'p';
        cpuLetter = 'p';
    }
    else if (userChoice == 3 && cpuChoice == 3)
    {
        userLetter = 's';
        cpuLetter = 's';
    }


    if(userLetter == cpuLetter)
    {
        printf("It's a draw!\n");
    }
    else if(userLetter == 'r' && cpuLetter == 's')
    {
        printf("Rock beats paper! You won");
    }
    else if(userLetter == 'p' && cpuLetter == 'r')
    {
        printf("Paper beats rock, You won!");
    }
    else if(userLetter == 's' && cpuLetter == 'p')
    {
        printf("Scissor beats paper, You won!");
    }
    else
        printf("CPU won!");


    return 0;
}