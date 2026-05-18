/* Translates an alphabetic phone number into numeric form */

#include <stdio.h>

int main(void)
{
    char n;
    printf("Enter phone number: ");

    n = getchar();

    do {
        if (n == 'A' || n == 'B' || n == 'C')
            printf("2");
        else if (n == 'D' || n == 'E' || n == 'F')
            printf("3");
        else if (n == 'G' || n == 'H' || n == 'I')
            printf("4");
        else if (n == 'J' || n == 'K' || n == 'L')
            printf("5");
        else if (n == 'M' || n == 'N' || n == 'O')
            printf("6");
        else if (n == 'P' || n == 'R' || n == 'S')
            printf("7");
        else if (n == 'T' || n == 'U' || n == 'V')
            printf("8");
        else if (n == 'W' || n == 'X' || n == 'Y')
            printf("9");
        else
            printf("%c", n);

        n = getchar();
    } while (n != '\n');

    return 0;
}