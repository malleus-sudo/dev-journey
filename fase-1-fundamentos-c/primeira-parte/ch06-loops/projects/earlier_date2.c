/*****************************************************************
 * Chapter 5 project earlier_date.c generalized so that the user *
 * may enter any number of dates. The user will enter 0/0/0 to   *
 * indicate that no more dates will be entered                   *
 *****************************************************************/

#include <stdio.h>

int main(void)
{
    int month, day, year, lower_month, lower_day, lower_year;

    printf("This program tells you the earliest date of list you entered. (enter 0/0/0 to finish)\n\n");
    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (day == 0 && month == 0 & year == 0)
            return 0;
    
    lower_day = day;
    lower_month = month;
    lower_year = year;

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (day == 0 && month == 0 & year == 0)
            break;

        if (year < lower_year) {
            lower_day = day;
            lower_month = month;
            lower_year = year;
        }
        else if (year == lower_year && month < lower_month) {
            lower_day = day;
            lower_month = month;
            lower_year = year;
        }
        else if (year == lower_year && month == lower_month && day < lower_day) {
            lower_day = day;
            lower_month = month;
            lower_year = year;
        }
        else continue;
    }

    printf("%d/%02d/%02d is the earliest date\n", lower_month, lower_day, lower_year);

    return 0;
}