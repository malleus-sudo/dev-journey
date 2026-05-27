/* Takes the first name and alst name entered by the user and displays the last name, a commma, and after the first name */

#include <stdio.h>

int main(void)
{
    char initial, name, last_name[20];

    printf("Enter a first and a last name: ");
    
    name = getchar();
    initial = name;

    while (name != ' ') {
        name = getchar();
    }
    
    for (int i = 0; i < 20; i++) {
        last_name[i] = getchar();

        if (last_name[i] == '\n')
            break;
    }

    printf("You entered the name: ");

    for (int j = 0; j < 20; j++) {
        if (last_name[j] == '\n')
            break;

        printf("%c", last_name[j]);
    }

    printf(", %c.\n", initial);

    return 0;
}