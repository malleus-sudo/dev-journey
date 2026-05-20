/* Calcladora de linha de comando */

#include <stdio.h>

int main(void)
{

    double x, y, result;
    char operation;

    printf("Welcome to the calculator.\n\n");

    printf("Enter the two numbers and the operation (+, -, * and /): ");
    
    scanf("%lf %c %lf", &x, &operation, &y);

    switch (operation) {
        case '+': result = x + y; break;
        case '-': result = x - y; break;
        case '*': result = x * y; break;
        case '/': result = x / y; break;
    }

    printf("The result is: %.2lf\n", result);

    return 0;
}