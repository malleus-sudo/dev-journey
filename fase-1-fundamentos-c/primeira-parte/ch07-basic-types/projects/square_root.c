/* Uses Newton's method to compute the square root of a positive floating point number */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, average, difference, y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        average = (y + (x / y)) / 2;
        
        difference = fabs(average - y);

        y = average;
    } while (difference > (0.00001 * y));

    printf("Square root: %lf", average);

    return 0;
}