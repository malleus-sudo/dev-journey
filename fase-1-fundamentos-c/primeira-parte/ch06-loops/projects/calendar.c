/* Prints a one-month calendar. The user specifies the number of days in the month and the day of the week on wich the month begins */

#include <stdio.h>

int main(void)
{
    int days, weekday;

    printf("Enter a number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &weekday);

    printf("\n");

    for(int j = 1; j < weekday; j++)
        printf("   ");

    for (int i = 1; i <= days; i++) {
        printf("%3d", i);

        if (weekday % 7 == 0)
            printf("\n");
        weekday++;
    }

    return 0;
}