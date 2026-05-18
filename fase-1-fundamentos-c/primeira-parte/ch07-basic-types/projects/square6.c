/******************************************************************************************
 * Prints a table of squares using a for statement. It pauses after every 24 four squares *
 * and displays the following message:                                                    *
 * Press Enter to continue...                                                             *
 ******************************************************************************************/

#include <stdio.h>

int main(void)
{
    long long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%lld", &n);

    while (getchar() != '\n');

    for (i = 1; i <= n; i++) {
        printf("%10lld%10lld\n", i, i * i);

        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            
            while (getchar() != '\n');
        }
    }
    
    return 0;
}