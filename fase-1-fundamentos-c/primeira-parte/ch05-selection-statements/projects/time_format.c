/* Asks the user for a 24-hour time, then displays the tima in 12-hour form */

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if(hour < 0 || hour > 23 || minute < 0 || minute > 59)
    {
        printf("Invalid time format.\n");
        return 1;
    }

    if(hour < 12)
    {
        if (hour == 0)
            hour = 12;
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
    }
    else
    {
        if (hour > 12)
            hour -= 12;
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minute);
    }       

    return 0;
}