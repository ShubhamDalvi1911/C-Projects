#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play();
int main()
{
    // variables for the switch
    char ch;
    while (1)
    {
        printf("\t====GUESS GAME 1 TO 100====\n");
        printf("\t1.START\n");
        printf("\t2.PLAY Again\n");
        printf("\t3.EXIT\n");
        printf("\tEnter your choice(1,2,3):");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1':
            play();
            break;

        case '2':
            play();
            break;

        case '3':
            printf("\n\tExiting the game. Goodbye!\n");
            exit(0);
            break;

        default:
            printf("\n\tInvalid choice. Please try again.\n");
        }
    }
}

void play()
{
    // varible for the game
    int guessed_number, player[2];
    int i = 1;
    while (i < 3)
    {
        int no_of_guess = 0;
        // seed the random number generator with the current time
        srand(time(NULL));

        // Generate a random number between 1 and 100
        int random_number = rand() % 100 + 1;

        // logic for game
        // here we are using while loop for round of each player & do while loop to atlest execute it once.
        printf("\n\t=>PLAYER %d it's your turn!\n", i);
        do
        {
            printf("\n\tgeuss the number:");
            scanf("%d", &guessed_number);
            if (guessed_number > random_number)
            {
                printf("\n\tGuess the LOWER number please:)\n");
            }
            else if (guessed_number < random_number)
            {
                printf("\n\tGuess the HIGHER number please:)\n");
            }
            else
            {
                printf("\n\tCongrats:) You guessed it!\n");
            }
            no_of_guess++;
        } while (guessed_number != random_number);
        printf("\n\tPlayer %d guessed the number in %d guesses\n", i, no_of_guess);
        // stores the guess of player to each
        player[i] = no_of_guess;
        i++;
    }
    // choose the winer
    if (player[1] < player[2])
    {
        printf("\n\t***PLAYER 1 is the winner! Congrats:)***\n");
    }
    else if (player[2] < player[1])
    {
        printf("\n\t***PLAYER 2 is the winner! Congrats:)***\n");
    }
    else
    {
        printf("\n\t***It's a tie! Play again to determine the winner!***");
    }
}