/* Calculates the average word lenght for a sentence */

#include <stdio.h>

int main(void)
{
    int lenght = 0, n = 1;
    float average = 0.0f;
    char word;

    printf("Enter a sentence: ");

    word = getchar();
    
    while(word != '\n') {
        if (word != ' ')
            lenght++;
        else if (word == ' ')
            n++;

        word = getchar();
    }

    average = (float) lenght / n;

    printf("Average word lenght: %.1f\n", average);

    return 0;
}