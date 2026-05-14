/*********************************************************************************************
 * Name: Dollar bills                                                                        *
 * Function: Show the user the smallest number of $20, $10, $5 and $1 bills to pay an amount *
 *********************************************************************************************/

#include<stdio.h>

int main(void)
{
   int amount, twenty, ten, five;

   printf("Enter a dollar amount: ");
   scanf("%d", &amount);

   twenty = amount / 20;
   amount = amount - 20 * twenty;
   ten = amount / 10;
   amount = amount - 10 * ten;
   five = amount / 5;

   printf("$20 bills: %d\n", twenty);
   printf("$10 bills: %d\n", ten);
   printf(" $5 bills: %d\n", five);
   printf(" $1 bills: %d\n", amount - 5 * five);

   return 0;
}