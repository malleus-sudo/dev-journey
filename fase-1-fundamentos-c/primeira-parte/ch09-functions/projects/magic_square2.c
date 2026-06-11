/**************************************************************
 * magic_square.c modfied to include the following functions: *
 * void create_magic_square(int n, char magic_square[n][n]);  *
 * void print_magic_square(int n, char magic_square[n][n]);   *
 **************************************************************/

#include<stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

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

    char magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    int i = 0; 
    int j = (n / 2);

    for (int number = 1; number <= n * n; number++) {
        magic_square[i][j] = number;

        int nrow = i - 1;
        int ncol = j + 1;

        if (nrow < 0)
            nrow = n - 1;
        if (ncol >= n)
            ncol = 0;
                                
        if (magic_square[nrow][ncol] != 0) {
            nrow = i + 1;
            ncol = j;
            
            if (nrow >= n)
                nrow = 0;
        }

        i = nrow;
        j = ncol;
    }

    return;
}

void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d", magic_square[i][j]);
        printf("\n");
    }
}