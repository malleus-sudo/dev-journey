/* Breaks down an ISBN-13 entered by the user */

#include<stdio.h>

int main(void)
{
    int gs1, group_id, publisher, item, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher, &item, &check_digit);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItemnumber: %d\nCheck digit: %d\n",
            gs1, group_id, publisher, item, check_digit);

    return 0;
}