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
    unsigned short value, sum = 0;

    printf("Welcome to SCRABBLE word points calculator!\n\n");

    printf("Enter a word: ");

    char letter = toupper(getchar());

    do {
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'L' || letter == 'N' || letter == 'O' || letter == 'R' || letter == 'S' || letter == 'T' || letter == 'U')
            value = 1;
        else if (letter == 'D' || letter == 'G')
            value = 2;
        else if (letter == 'B' || letter == 'C' || letter == 'M' || letter == 'P')
            value = 3;
        else if (letter == 'F' || letter == 'H' || letter == 'V' || letter == 'W' || letter == 'Y')
            value = 4;
        else if (letter == 'K')
            value = 5;
        else if (letter == 'J' || letter == 'X')
            value = 8;
        else if(letter == 'Q' || letter == 'Z')
            value = 10;
        
        sum += value;

        letter = toupper(getchar());
    } while(letter != '\n');

    printf("Scrabble value: %hu", sum);

    return 0;
}