/*********************************************************************************************************************************
 * Simulates the game of craps, which is played with two dice. On the first roll, the player winds if the sum of the dice        *
 * is 7 or 11. The player loses if the sum is 2, 3, or 12. Any other roll is called the "point" and the game continues. On       *
 * each subsequent roll, the player wins if he or she rolls the point again. The player loses by rolling 7. Any other roll       *
 * is ignored and the game continues, At the end of each game, the program will ask the user whether or not to play again.       *
 * When the user enters a response other than y or Y, the program will display the number of wins and losses and then terminate. *
 *********************************************************************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

#define DICE_SIDES 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int turn = 0, wins = 0, losses = 0, point = 0;
    printf("Welcome to the craps game!\n\n");

    srand((unsigned)time(NULL));

    while(true) {
        int roll = roll_dice();
        printf("You rolled: %d\n", roll);
        
        if (turn == 0) {
            if (roll == 7 || roll == 11) {
            printf("You win!\n");
            wins++;
            } else if (roll == 2 || roll == 3 || roll == 12) {
                printf("You lose!\n");
                losses++;
            } else {
                point = roll;
                printf("Your point is %d\n", point);
                turn++;
                continue;
            }

            printf("Play again? ");
            if (!play_game()) {
                printf("Wins: %d  Losses: %d\n", wins, losses);
                return 0;
            }
               
            turn = 0;
            point = 0;
            continue;
        }
        if (turn > 0) {
        
            if (roll == 7) {
                printf("You lose!\n");
                losses++;
            } else if (roll == point) {
                printf("You win!\n");
                wins++;
            } else continue;

            printf("Play again? ");
            if (!play_game()) {
                printf("Wins: %d Losses: %d\n", wins, losses);
                return 0;
            }

            turn = 0;
            point = 0;
        }
    }
}

int roll_dice(void)
{    
    int dice1 = (rand() % DICE_SIDES) + 1; // rand() % DICE_SIDES goes from 0 to 5, the + 1 at the end ensure the roll goes from 1 to 6;
    int dice2 = (rand() % DICE_SIDES) + 1;

    return dice1 + dice2;
}

bool play_game(void)
{
    if (tolower(getchar()) == 'y') {
        while (getchar() != '\n'); // clear the input buffer
        return true;
    }
    else
        return false;
}