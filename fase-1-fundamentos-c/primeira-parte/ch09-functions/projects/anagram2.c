/**************************************************************
 * anagram.c modified so it includes the following functions: *
 * void read_word(int counts[26]);                            *
 * bool equal_array(int counts1[26], int counts[26]);         *
 **************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts[26]);

int main(void)
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("Enter the first word: ");
    read_word(counts1);

    printf("Enter the second word: ");
    read_word(counts2);

    if (equal_array(counts1, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26])
{
    char ch;
    const char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                             'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    while (true) {
        ch = getchar();

        if (ch != ' ' && ch != '\n')
            for (int i = 0; i < 26; i++) {
                if (ch == alphabet[i])
                    counts[i] += 1;
            }
        else break;
    }

    return;
}

bool equal_array(int counts1[26], int counts2[26])
{
    bool anagram = true;

    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i])
        {
            anagram = false;
            break;
        }
    }

    return anagram;
}