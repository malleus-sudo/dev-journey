/***********************************************************************************************
 * Asks the user to enter a two-digit number, then prints the number with its digits reversed. *
 ***********************************************************************************************/

#include <stdio.h>

int main(void)
{
    int number;
    
    printf("Enter a two-digit number: ");
    scanf("%2d", &number);
    printf("The reversal is: %d%d", number % 10, number / 10);

    return 0;
}