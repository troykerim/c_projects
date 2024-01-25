/*
    Password Generator
    Prompt asks user how big they want there password.

    Password Creation (We want the following):
    1. Size for how big the password will be, (user inputs the size they want), maybe include a minimum size
    password is made up of 2-5 which can be strings.
    2. A-Z
    3. a-z
    4. 0-9
    5. Special characters.

    Password is a string or array of characters A-Z in lowercase and uppercase, numbers and/or special characters
    

    (Version 1):
    Generate a password with only uppercase

    (Version 2):
    Generate a password with only lowercase

    (Version 3):
    Generate a password with both uppercase and lowercase 


    (Future):
    User only asks for uppercase, lowercase and numbers w/o special characters
    The other option, with the above 3 with special characters
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size; // How big the password will be.
    int index; // Used for the array.
    srand(time(NULL));

    char uppercase[] = {'A' ,'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    char lowercase[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    char special[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '\0'};

    // or use: char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // or use: char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    
    printf("Welcome to the password generator.\n");
    printf("Input a size for your password: ");
    scanf("%d", &size);

    // Size has to be positive, checks for that
    if(size <= 0)
    {
        printf("Error! Size should be a positive number.\n");
        printf("Exiting Program!\n");
        return 1; // Exit program with error code.
    }

    char password[size+1]; // Include +1 with the size for the null terminator

    printf("The size is of password is %d\n", size);

    for (int i = 0; i < size; i++)
    {
        int sel = rand() % 4;
        index = rand() % 26;
        
        if (sel == 0)
        {
           password[i] = uppercase[index]; 
        }
        else if (sel == 1)
        {
            password[i] = lowercase[index]; 
        }
        else if (sel == 2)
        {
            password[i] = nums[index];
        }
        else
            password[i] = special[index];
            
        
    }

    password[size] = '\0'; // Null-terminate the password
    printf("Generated password: %s\n", password);


    return 0;
}