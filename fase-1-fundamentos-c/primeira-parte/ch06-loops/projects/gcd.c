/* Asks the user to enter two integersm then calculates and displays their greatest common divisor (GCD) */

#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    //Euclid's algorithm
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}