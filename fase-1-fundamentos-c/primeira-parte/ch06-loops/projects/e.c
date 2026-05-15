/***********************************************************************************
 * Approximates the value of the mathematical constant e by comupting the value of *
 * 1 + 1/1! + 1/2! + 1/3! +...+ 1/n!                                               *
 * Where n is an integer entered by the user.                                      *
 ***********************************************************************************/

#include <stdio.h>

int main(void)
{
    int n;

    printf("This program approximates velue of e.\n\n");

    printf("Enter the aproximation factor: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("e = 1\n");
        return 0;
    }

    float e = 1.0f;

    for (int i = 1; i <= n; i++) {
        float fraction = 1.0f / i;

        for (int j = i - 1; j > 0; j--) {
            fraction *= 1.0f / j; 
        }

        e += fraction;
    }

    printf("e = %f", e);

    return 0;
}