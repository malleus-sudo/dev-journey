/************************************************************************************************** 
 * In the SCRABBLE Crossword Game, players form words using small tiles, each containing          *
 * a letter and a face value. The face value varies from one letter to another based on the       *
 * letter's rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K,     *
 * 8: JX, 10: QZ.) This program computes the value of a word by summing the values of its letters *
 **************************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    unsigned int sum = 0;
    const unsigned int value[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    const char characters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    printf("Welcome to SCRABBLE word points calculator!\n\n");

    printf("Enter a word: ");

    char word = toupper(getchar());

    do {
        for (int i = 0; i < 26; i++) {
            if (word = characters[i])
                sum += value[i];
        }

        word = toupper(getchar());
    } while(word != '\n');

    printf("Scrabble value: %u\n", sum);

    return 0;
}