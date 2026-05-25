/* Reads a 5 x 5 array of integers and  then prints the row sums and the column sums */

#include <stdio.h>

#define N 5

int main(void)
{
    int array[N][N], row_sums[N] = {0}, column_sums[N] = {0};

    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < N; j++)
            scanf("%d", &array[i][j]);
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            row_sums[i] += array[i][j];
    
    for (int j = 0; j < N; j++)
        for (int i = 0; i < N; i++)
            column_sums[j] += array[i][j];
    
    printf("Row totals:");

    for (int i = 0; i < N; i++)
        printf(" %d", row_sums[i]);
    printf("\n");

    printf("Column totals:");

    for (int i = 0; i < N; i++)
        printf(" %d", column_sums[i]);
    printf("\n");

    return 0;
}