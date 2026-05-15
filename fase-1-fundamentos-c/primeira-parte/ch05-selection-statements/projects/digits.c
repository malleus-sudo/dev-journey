/* Calculates how many digits a number contains */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number %d has ", number);
    if (number >= 0 && number < 10 )
        printf("1");
    else if (number >= 10 && number < 100)
        printf("2");
    else if (number >= 100 && number < 1000)
        printf("3");
    else if (number >= 1000 && number < 10000)
        printf("4");
    else printf("\nOut of scope!");
    printf(" digits\n");

    return 0;
}