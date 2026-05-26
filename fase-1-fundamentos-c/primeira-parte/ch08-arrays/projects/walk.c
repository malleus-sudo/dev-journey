/**************************************************************************************
 * Generates a "random walk" across a 10 x 10 array. The array will contain           *
 * characters (all '.' initially). The program must randomly "walk" from element to   *
 * element, always going up, down, left or right by one element. The elements visited *
 * by the program will be labeled with the letters A trough Z, in the order visited.  *
 **************************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main(void)
{
    int i = 1, j = 0, k = 0, direction;
    char field[ARRAY_SIZE][ARRAY_SIZE];
    const char path[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (short i = 0; i < ARRAY_SIZE; i++)
        for (short j = 0; j < ARRAY_SIZE; j++)
            field[i][j] = '.';
    
    srand((unsigned) time(NULL));

    field[0][0] = path[0];

    while (i < 26) {

        if (field[j + 1][k] != '.' && field[j - 1][k] != '.' && field[j][k + 1] != '.' && field[j][k - 1] != '.')
            break;
        else {
            direction = rand() % 4;        //0-right, 1-up, 2-left and 3-down
        
            switch(direction) {
                case 0: if (j + 1 >= ARRAY_SIZE || field[j + 1][k] != '.')
                            break;
                        else {
                            j++;
                            field[j][k] = path[i];
                            i++;
                            break;
                        }
                case 1: if (k - 1 < 0 || field[j][k - 1] != '.')
                            break;
                        else {
                            k--;
                            field[j][k] = path[i];
                            i++;
                            break;
                        }
                case 2: if (j - 1 < 0 || field[j - 1][k] != '.')
                            break;
                        else {
                            j--;
                            field[j][k] = path[i];
                            i++;
                            break;
                        }
                case 3: if (k + 1 >= ARRAY_SIZE || field[j][k + 1] != '.')
                            break;
                        else {
                            k++;
                            field[j][k] = path[i];
                            i++;
                            break;
                        }
            }
        }
    }

    for (int l = 0; l < ARRAY_SIZE; l++) {
        for (int m = 0; m < ARRAY_SIZE; m++)
            printf(" %c", field[l][m]);
        printf("\n");
    }

    return 0;
}