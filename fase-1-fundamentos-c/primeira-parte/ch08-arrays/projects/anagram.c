/* Tests whether two words are anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    bool anagram = true;
    int was_seen[26] = {0};
    char ch;
    const char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


    printf("Enter first word: ");

    while (1) {
        ch = tolower(getchar());

        if (ch == '\n')
            break;

        for (int i = 0; i < 26; i++) {
            if (ch == alphabet[i])
                was_seen[i] += 1;
        }
    }

    printf("Enter second word: ");
    
    while (1) {
        ch = tolower(getchar());

        if (ch == '\n')
            break;

        for (int i = 0; i < 26; i++) {
            if (ch == alphabet[i])
                was_seen[i] -= 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (was_seen[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}