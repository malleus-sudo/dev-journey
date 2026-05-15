/* Reads an integer entered by the user and displays it in octal. */

#include <stdio.h>

int main(void)
{
    int number;
    int n1, n2, n3, n4, n5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    n5 = number % 8;
    number /= 8;
    n4 = number % 8;
    number /= 8;
    n3 = number % 8;
    number /= 8;
    n2 = number % 8;
    number /= 8;
    n1 = number % 8;
    number /= 8;

    printf("In octal, yout number is: %d%d%d%d%d", n1, n2, n3, n4, n5);

    return 0;
}