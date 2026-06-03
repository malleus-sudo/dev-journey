/*******************************************************
 * walk.c modified to include the following functions: *
 * void generate_random_walk(char walk[10][10]);       *
 * void print_array(char walk[10][10])                 *
 *******************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char walk[10][10];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    const char path[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (short i = 0; i < 10; i++)
        for (short j = 0; j < 10; j++)
            walk[i][j] = '.';
    
    srand((unsigned) time(NULL));

    int i = 1, j = 0, k = 0, direction;

    walk[0][0] = path[0];

    while (i < 26) {

        if (walk[j + 1][k] != '.' && walk[j - 1][k] != '.' && walk[j][k + 1] != '.' && walk[j][k - 1] != '.')
            break;
        else {
            direction = rand() % 4;        //0-right, 1-up, 2-left and 3-down
        
            switch(direction) {
                case 0: if (j + 1 >= 10 || walk[j + 1][k] != '.')
                            break;
                        else {
                            j++;
                            walk[j][k] = path[i];
                            i++;
                            break;
                        }
                case 1: if (k - 1 < 0 || walk[j][k - 1] != '.')
                            break;
                        else {
                            k--;
                            walk[j][k] = path[i];
                            i++;
                            break;
                        }
                case 2: if (j - 1 < 0 || walk[j - 1][k] != '.')
                            break;
                        else {
                            j--;
                            walk[j][k] = path[i];
                            i++;
                            break;
                        }
                case 3: if (k + 1 >= 10 || walk[j][k + 1] != '.')
                            break;
                        else {
                            k++;
                            walk[j][k] = path[i];
                            i++;
                            break;
                        }
            }
        }
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf(" %c", walk[i][j]);
        printf("\n");
    }
}