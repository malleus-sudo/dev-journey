/* Translates an alphabetic phone number into numeric form */

#include <stdio.h>

int main(void)
{
    char number[15];
    printf("Enter phone number: ");

    for(int i = 0; i < 15; i++){
        number[i] = getchar();

        if (number[i] == '\n')
            break;    }

    for (int j = 0; j < 15; j++) {
        if (number[j] == 'A' || number[j] == 'B' || number[j] == 'C')
            number[j] = '2';
        else if (number[j] == 'D' || number[j] == 'E' || number[j] == 'F')
            number[j] = '3';
        else if (number[j] == 'G' || number[j] == 'H' || number[j] == 'I')
            number[j] = '4';
        else if (number[j] == 'J' || number[j] == 'K' || number[j] == 'L')
            number[j] = '5';
        else if (number[j] == 'M' || number[j] == 'N' || number[j] == 'O')
            number[j] = '6';
        else if (number[j] == 'P' || number[j] == 'R' || number[j] == 'S')
            number[j] = '7';
        else if (number[j] == 'T' || number[j] == 'U' || number[j] == 'V')
            number[j] = '8';
        else if (number[j] == 'W' || number[j] == 'X' || number[j] == 'Y')
            number[j] = '9';
        
        if (number[j] == '\n')
            break;
    }

    printf("In numeric form: ");

    for (int k = 0; k < 15; k++) {
        printf("%c", number[k]);
        
        if(number[k] == '\n')
            break;
    }

    return 0;
}