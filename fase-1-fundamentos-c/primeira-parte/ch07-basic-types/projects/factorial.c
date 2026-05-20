/* Computes a factorial of a positive integer */

#include <stdio.h>

int main(void)
{
    unsigned n;
    long double factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    printf("Factorial of %u: ", n);

    if (n == 0 || n == 1) {
        printf("%.0llf\n", factorial);
    }
    else {
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        printf("%.0llf\n", factorial);
    }
    
    return 0;
}