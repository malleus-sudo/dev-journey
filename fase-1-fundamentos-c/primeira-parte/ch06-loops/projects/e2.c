/******************************************************************************
 * e.c project modified so that the program continues adding therms           *
 * until the current term becomes less than epsilon, where epsilon is a small *
 * (floating-point) number entered by the user.                               *
 ******************************************************************************/

#include <stdio.h>

int main(void)
{
    double e = 1.0, fraction = 1.0, epsilon;
    int n = 1;
    
    printf("This program approximates velue of e.\n\n");

    printf("Enter the limit factor (epsilon): ");
    scanf("%lf", &epsilon);

    while (fraction > epsilon)
    {
        e += fraction;

        n++;

        fraction /= n;
    }

    printf("e = %lf", e);

    return 0;
}