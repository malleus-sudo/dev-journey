/* Checks numbers for repeated digits and displays the repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool repeated = false, digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s):");

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            repeated = true;
            printf(" %d", digit);
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