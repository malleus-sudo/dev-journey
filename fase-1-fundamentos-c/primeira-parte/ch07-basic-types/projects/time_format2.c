/* Aks the user for a 12-hour time, then displays the time in 24-hout form */

#include <stdio.h>

int main(void)
{
    unsigned short hour, minute;
    char indicator;

    printf("Enter a 12-hour time: ");
    scanf("%hu:%hu %cM", &hour, &minute, &indicator);

    indicator = toupper(indicator);

    if (hour < 1 || hour > 12 || minute < 0 || minute > 59 || (indicator != 'A' && indicator != 'P')) {
        printf("Invalid time format.");
        return 1;
    }

    if (indicator == 'P' && hour < 12)
        hour += 12;
    else if (indicator == 'A' && hour == 12)
        hour = 0;
    
    printf("Equivalent 24-hour time: %hu:%hu", hour, minute);

    return 0;
}