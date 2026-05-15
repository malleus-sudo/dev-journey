/* Converts a numerical grade into a letter grade */

#include <stdio.h>

int main(void)
{
    int ngrade;
    char lgrade;

    printf("Enter numerical grade: ");
    scanf("%d", &ngrade);

    if (ngrade < 0 || ngrade > 100)
    {
        printf("Grade out of escope!\n");
        return 1;
    }

    ngrade /= 10;

    switch (ngrade)
    {
        case 0: case 1: case 2: case 3: case 4: case 5:
            lgrade = 'F';
            break;
        case 6:
            lgrade = 'D';
            break;
        case 7:
            lgrade = 'C';
            break;
        case 8:
            lgrade = 'B';
            break;
        case 9: case 10:
            lgrade = 'A';
            break;
    }

    printf("Letter grade: %c\n", lgrade);

    return 0;
}