/*****************************************************************
 * Evakuates an expression. The operands in the expression are   *
 * floating-point numbers; the operators are +, -, * and /. The  *
 * expression is evaluated from left to right (no operator takes *
 * precedence over any other operator).                          *
 *****************************************************************/

#include <stdio.h>

int main(void)
{
    double operand, value = 0.0;
    char operator;

    printf("Enter an expression: ");

    scanf("%lf", &operand);
    value = operand;
    operator = getchar();

    while (operator != '\n') {
        scanf("%lf", &operand);

        switch (operator) {
            case '+': value += operand; break;
            case '-': value -= operand; break;
            case '*': value *= operand; break;
            case '/': value /= operand; break;
        }

        operator = getchar();
    }

    printf("Value of expression: %.1lf\n", value);

    return 0;
}