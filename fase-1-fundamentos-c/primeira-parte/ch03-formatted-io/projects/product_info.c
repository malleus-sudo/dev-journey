/* Format product information entered by the user */

#include<stdio.h>

int main()
{
    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%.2f\t%d/%d/%d", item, price, month, day, year);

    return 0;
}