/* Prompts the user to enter a number n, then prints all even squares between 1 and n */

#include <stdio.h>

int main(void)
{
    int n;

    printf("This program displays all even squares between 1 an n.\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i*i <= n; i++)
        if (i % 2 == 0)
            printf("%d\n", i * i);
    
    return 0;
}