#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
char getComputerChoice()
{
    char options[] = {'R', 'P', 'S'}; // R = Rock, P = Paper, S = Scissors
    return options[rand() % 3];       // Randomly select one
}

// Function to decide the winner
void decideWinner(char user, char computer)
{
    printf("You chose: %c\n", user);
    printf("Computer chose: %c\n", computer);

    if (user == computer)
    {
        printf("It's a draw!\n");
    }
    else if ((user == 'R' && computer == 'S') ||
             (user == 'P' && computer == 'R') ||
             (user == 'S' && computer == 'P'))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}

int main()
{
    char userChoice, computerChoice;
    int playAgain;

    // Seed the random number generator
    srand(time(0));

    do
    {
        // Display the menu
        printf("Welcome to Stone-Paper-Scissors Game!\n");
        printf("Enter your choice:\n");
        printf("R for Rock\n");
        printf("P for Paper\n");
        printf("S for Scissors\n");
        printf("Your choice: ");
        scanf(" %c", &userChoice);

        // Convert to uppercase (if user enters lowercase)
        if (userChoice >= 'a' && userChoice <= 'z')
        {
            userChoice -= 32;
        }

        // Validate user input
        if (userChoice != 'R' && userChoice != 'P' && userChoice != 'S')
        {
            printf("Invalid input! Please enter R, P, or S.\n");
            continue;
        }

        // Get computer's choice
        computerChoice = getComputerChoice();

        // Decide the winner
        decideWinner(userChoice, computerChoice);

        // Ask if the user wants to play again
        printf("\nDo you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &playAgain);
        printf("\n");

    } while (playAgain == 1);

    printf("Thank you for playing!\n");
    return 0;
}