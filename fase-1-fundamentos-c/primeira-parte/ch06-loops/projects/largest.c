/* Finds the largest in a series of nonnegative numbers entered by the user */

#include <stdio.h>

int main()
{
    float number = 0.0f, largest = 0.0f;

    printf("Thus program finds the largest number in a series. (0 to end).\n\n");

    do {
        if (number > largest)
            largest = number;

        printf("Enter a number: ");
        scanf("%f", &number);
    } while (number > 0);

    printf("The largest number entered was %f\n", largest);

    return 0;
}