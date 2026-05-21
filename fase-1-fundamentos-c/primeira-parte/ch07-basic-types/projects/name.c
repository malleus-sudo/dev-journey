/* Takes the first name and alst name entered by the user and displays the last name, a commma, and after the first name */

#include <stdio.h>

int main(void)
{
    char initial, name, last_name;

    printf("Enter a first and a last name: ");
    
    name = getchar();
    initial = name;
    
    while (name != ' ')
    {
        name = getchar();
    }

    last_name = getchar();

    while (last_name != '\n') {
        printf("%c", last_name);

        last_name = getchar();
    }

    printf(", %c.\n", initial);

    return 0;
}