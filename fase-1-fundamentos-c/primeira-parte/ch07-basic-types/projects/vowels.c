/* Counts the number of vowels (a, e, i, o and u) in a sentence */

#include <stdio.h>

int main(void)
{
    int vowels = 0;
    char sentence;

    printf("Enter a sentence: ");

    sentence = toupper(getchar());

    do {
        if (sentence == 'A' || sentence == 'E' || sentence == 'I' || sentence == 'O' || sentence == 'U')
            vowels++;

        sentence = toupper(getchar());
    } while (sentence != '\n');

    printf ("Your sentence contains %d vowels.", vowels);

    return 0;
}