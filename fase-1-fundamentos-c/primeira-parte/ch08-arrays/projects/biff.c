/* BIFF filter to translate user's message to BIFF speak */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char message[200];
    int i = 0;

    printf("Enter message: ");

    do {
        message[i] = toupper(getchar());

        switch (message[i])
        {
            case 'A': message[i] = '4'; break;
            case 'B': message[i] = '8'; break;
            case 'E': message[i] = '3'; break;
            case 'I': message[i] = '1'; break;
            case 'O': message[i] = '0'; break;
            case 'S': message[i] = '5'; break;
        }

        i++;
    } while (message[i - 1] != '\n');

    printf("In BIFF-speak: ");

    for (int j = 0; j < i - 1; j++)       
        printf("%c", message[j]);

    printf("!!!!!!!!!!\n");

    return 0;
}