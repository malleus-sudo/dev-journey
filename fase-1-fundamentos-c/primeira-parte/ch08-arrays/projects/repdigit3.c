/* Checks numbers for repeated digits and prints a table showing how many times each digit appears */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool repeated = false, digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Digit:      ");
    for (short i = 0; i < 10; i++)
        printf("%3d", i);
    printf("\n");

    printf("Occurrences:");

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            repeated = true;
            printf("%3d", digit);
        }

        digit_seen[digit] = true;
            n /= 10;
    }

    if (!repeated)
        printf("No repeated digit\n");
    else
        printf("\n");

    return 0;
}