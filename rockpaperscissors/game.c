/*
    Rock Paper Scissors

    2 players: User and CPU


*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Array of options for the cpu to choose
    char options[] = {'r', 'p', 's'};
    int cpu_index, user_index;
    char cpu_choice, user_choice;
    char sel;

    srand(time(NULL));

    while (sel != 'n' && sel != 'N')
    {
        printf("'0' for rock, '1' for paper, and '2' for scissors\n");
        printf("Make a selection between 0 and 2: ");
        scanf("%d", &user_index);
        if (user_index > 2 || user_index < 0)
        {
            printf("Invalid Entry!\n");
            printf("You must enter: 0, 1 or 2\n");
            // break;
        }

        else
        {
            cpu_index = rand() % 3;

            cpu_choice = options[cpu_index];
            user_choice = options[user_index];

            printf("The cpu chose: %c\n", cpu_choice);
            printf("You chose: %c\n", user_choice);
            if (user_index == cpu_index)
            {
                printf("It is a tie!\n");
            }
            else if ((user_index == 0 && cpu_index == 2) || (user_index == 2 && cpu_index == 1)|| (user_index == 1 && cpu_index == 0))
            {
                printf("You Won!\n");
            }
            else
                printf("You lost!\n");
        }
        printf("Play again? Y or N\n");
        scanf(" %c", &sel);
    }
    /*  printf("Make a selection.\n");
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
  */

    return 0;
}