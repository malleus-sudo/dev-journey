/****************************************************************************************************************************
 * Asks the user to enter values for x and n, calls the recursive function power to compute xⁿ, and then displays the value *
 * returned by the function. The power function can be made faster by having it calculate xⁿ in a different way.            *
 * If n is even, we used the formula x^n = (x^(n/2))^2. If n is odd, then x^n = x * x^(n-1).                                *
 ****************************************************************************************************************************/

#include<stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;

    printf("Welcome to the power calculator!\n");

    printf("Enter the integer: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    printf("%d to the power of %d is: %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        int half = power(x, n / 2);
        return half * half;
    }
    else
        return x * power(x, n - 1);
}