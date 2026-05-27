/* Prints an n x n magic square */

#include <stdio.h>

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if (n < 1 || n > 99 || n % 2 == 0) {
        printf("Error: Size must be an odd number between 1 and 99.\n");
        return 1;
    }

    int square[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            square[i][j] = 0;

    
    int i = 0; 
    int j = (n / 2);

    for (int number = 1; number <= n * n; number++) {
        square[i][j] = number;

        int nrow = i - 1;
        int ncol = j + 1;

        if (nrow < 0)
            nrow = n - 1;
        if (ncol >= n)
            ncol = 0;
                                
        if (square[nrow][ncol] != 0) {
            nrow = i + 1;
            ncol = j;
            
            if (nrow >= n)
                nrow = 0;
        }

        i = nrow;
        j = ncol;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d", square[i][j]);
        printf("\n");
    }

    return 0;
}