/**********************************************************************
 * Asks the user to enter a value of x, calls the function to compute *
 * the polinomyal (3x⁵+2x⁴-5x³-x²+7x-6), and then displays the value  *
 * returned by the function.                                          *
 **********************************************************************/

#include<stdio.h>

float polynomial(float x);

int main(void)
{
    float x;

    printf("Welcome to the polynomial calculator!\n");
    printf("Enter a value of x to calculate the polynomial: ");
    scanf("%f", &x);

    printf("The result is: %.2f\n", polynomial(x));

    return 0;
}

float polynomial(float x)
{
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}