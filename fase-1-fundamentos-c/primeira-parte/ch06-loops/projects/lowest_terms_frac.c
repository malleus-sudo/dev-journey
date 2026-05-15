/* Asks the user to enter a fraction, then reduces the fraction to the lowest terms: */

#include <stdio.h>

int main(void)
{
    int num, den, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    m = num;
    n = den;

    //Euclid's algorithm
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    num /= m;
    den /= m;

    printf("In lowest terms: %d/%d\n", num, den);

    return 0;
}