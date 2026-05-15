/* Finds the largest and the smallest of four integers entered by the user. */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, max1, min1, max2, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 < n4) {
        max1 = n4;
        min1 = n1;
    }
    else {
        max1 = n1;
        min1 = n4;
    }

    if (n2 < n3) {
        max2 = n3;
        min2 = n2;
    }
    else {
        max2 = n2;
        min2 = n3;
    }

    if (max1 < max2)
        max1 = max2;
    
    if (min1 > min2)
        min1 = min2;
    
    printf("Largest: %d\n", max1);
    printf("Smallest: %d\n", min1);

    return 0;
}