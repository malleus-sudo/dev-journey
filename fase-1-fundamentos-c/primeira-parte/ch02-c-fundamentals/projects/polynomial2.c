/*************************************************************
 * Name: Polynomial2                                             *
 * Function: Calculates the value of the polynomial          *
 * 3x^5 + 2x^4 - 5x^3 - x^2 +7x + 6  using the Horner's Rule *
 *************************************************************/

#include<stdio.h>

int main(void)
{
    float x;

    printf("Welcome to the polynomial calculator!\n");
    printf("Enter a value of x to calculate the polynomial: ");
    scanf("%f", &x);

    float polynom = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The result is: %.2f\n", polynom);

    return 0;
}