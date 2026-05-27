/* Encrypts a message using a Caesar cipher */

#include <stdio.h>

#define MAX_LENGHT 80

int main(void)
{
    const char upper_letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const char lower_letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char message[MAX_LENGHT];
    short n;

    printf("Enter message to be encrypted: ");
    for (int i = 0; i < MAX_LENGHT; i++) {
        message[i] = getchar();

        if (message[i] == '\n')
            break;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%hd", &n);

    for (int i = 0; i < MAX_LENGHT; i++) {
        if (message[i] == '\n')
            break;

        for (int j = 0; j < 26; j++) {
            if (message[i] == upper_letters[j]) {
                if (j + n > 25)
                    j = (j + n) - 26;
                else
                    j += n;
                message[i] = upper_letters[j];
                break;
            }
            else if (message[i] == lower_letters[j]) {
                if (j + n > 25)
                    j = (j + n) - 26;
                else
                    j += n;
                message[i] = lower_letters[j];
                break;
            }
        }
    }

    printf("Encrypted message: ");
    for (int i = 0; i < MAX_LENGHT; i++) {
        printf("%c", message[i]);
        
        if (message[i] == '\n')
            break;
    }

    return 0;
}