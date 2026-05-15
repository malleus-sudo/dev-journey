/* Project loan.c in Chapter 2 modified to also ask the user to enter the number of payments and then display the balance remaining after each of these payments. */

#include<stdio.h>

int main(void)
{
    float loan, interest, payment;
    int n;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    interest = interest / (12.f * 100.f);
    loan = (loan + interest * loan) - payment;

    printf("Enter the number of payments: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Balance remaining after %d payment: %.2f \n", i, loan);

        loan = (loan + interest * loan) - payment;
    }

    return 0;
}