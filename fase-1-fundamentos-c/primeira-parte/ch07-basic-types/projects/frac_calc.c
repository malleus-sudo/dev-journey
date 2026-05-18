/****************************************************************************************************
 * Modifies addfrac2.c so that user may add, subtract, multiply or divide two fractions *
 ****************************************************************************************************/

#include<stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom, m, n;
    char operation;

    printf("This program calculates an operation between two fractions.\n\n");

    printf("Enter the entire operation: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operation, &num2, &denom2);
    
    if (operation == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        
        m = result_num;
        n = result_denom;

        while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
        }

        result_num /= m;
        result_denom /= m;

        printf("The sum is %d/%d\n", result_num, result_denom);
    }
    else if (operation == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;

        m = result_num;
        n = result_denom;

        while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
        }

        result_num /= m;
        result_denom /= m;

        printf("The subtraction is %d/%d\n", result_num, result_denom);
    }
    else if (operation == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;

        m = result_num;
        n = result_denom;

        while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
        }

        result_num /= m;
        result_denom /= m;

        printf("The multiplication is %d/%d\n", result_num, result_denom);
    }
    else if (operation == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;

        m = result_num;
        n = result_denom;

        while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
        }

        result_num /= m;
        result_denom /= m;
        
        printf("The division is %d/%d\n", result_num, result_denom);
    }
    else
        printf("Operation invalid.\n");           

    return 0;
}
