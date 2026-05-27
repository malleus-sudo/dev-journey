/* Reverses the words in a sentence */

#include <stdio.h>

int main(void)
{
    char sentence[200], terminating_character;
    int i;

    printf("Enter a sentence: ");

    for (i = 0; i < 200; i++) {
        sentence[i] = getchar();

        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            terminating_character = sentence[i];
            break;
        }
    }

    for (int j = i; j >= 0; j--) {
        if (sentence[j] == ' ') {
            for (int k = j + 1; k < i; k++)
                printf("%c", sentence[k]);
            printf("%c", sentence[j]);
            i = j;
        }
        else if (j == 0) {
            for (int k = j; k < i; k++)
                printf("%c", sentence[k]);
        }
    }

    printf("%c\n", terminating_character);

    return 0;
}