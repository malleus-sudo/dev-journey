/*********************************************************************************************
 * broker.c modified to:                                                                     *
 * (a) Ask the user to enter the number of shares and the price per                          *
 * share, instead of the value of the trade.                                                 *
 * (b) Add statements that compute the commission charged by a rival broker ($33 plus        *
 * 3 ¢ per share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). *
 * Display the rival's commission as well as the commission charged by the original broker.  *
 *********************************************************************************************/

#include <stdio.h>

int main(void)
{
    int shares;
    float price, commission, rival;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);

    printf("Enter the price per share: ");
    scanf("%f", &price);

    if (shares < 0 || price < 0) {
        printf("Neither the shares nor the price per share can be negative.\n");
        return 1;
    }

    commission = shares * price;

    if (shares < 2000)
        rival = 33 + 0.03f * shares;
    else
        rival = 33 + 0.02f * shares;
    
    printf("Your commission will be: %.2f\nYour rival's commission would be: %.2f\n",
            commission, rival);

    return 0;
}