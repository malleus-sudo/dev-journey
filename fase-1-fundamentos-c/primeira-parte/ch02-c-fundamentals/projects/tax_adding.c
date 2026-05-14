/****************************************************** 
 * Name: tax adding                                   *
 * Function: receives a dollar-and-cents amount       *
 * from user and returns the amount with 5% tax added *
 ******************************************************/

#include<stdio.h>
#define TAX 0.5f

int main()
{
    printf("Welcome to the tax add calculator! This program uses dollars and cents.\n");
    
    float amount;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f", (amount * TAX) + amount);

    return 0;
}