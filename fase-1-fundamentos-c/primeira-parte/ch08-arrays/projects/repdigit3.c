/* Checks numbers for repeated digits and prints a table showing how many times each digit appears */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int digit, counter [10] = {0};
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
        
        counter[digit]++;

        n /= 10;
    }

    for (short j = 0; j < 10; j++)
        printf("%3d", counter[j]);
    printf("\n");

    return 0;
}