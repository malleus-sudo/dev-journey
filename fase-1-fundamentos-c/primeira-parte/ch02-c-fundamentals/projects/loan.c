/********************************************************
 * Name: Loan                                           *
 * Function: Calculates the remaining balance on a loan *
 * after the first, second and third monthly payments   *
 ********************************************************/

#include<stdio.h>

int main(void)
{
    float loan, interest, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    interest = interest / (12.f * 100.f);
    loan = (loan + interest * loan) - payment;

    printf("Balance remaining after first payment: %.2f \n", loan);

    loan = (loan + interest * loan) - payment;

    printf("Balance remaining after second payment: %.2f \n", loan);

    loan = (loan + interest * loan) - payment;

    printf("Balance remaining after third payment: %.2f \n", loan);

    return 0;
}