/* next_closest_flight.c modified so that the departure times are stored in an array and the arrival times are stored in a second array. */

/***********************************************************************************************
 * Asks the user to enter a time (expressed in hours and minutes, using the 24-                *
 * hour clock). The program then displays the departure and arrival times for the flight whose *
 * departure time is closest to that entered by the user.                                      * 
 ***********************************************************************************************/

#include <stdio.h>

int main(void)
{
    // List of departure and arrival times in minutes since the midnight
    const int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    const int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    // Reading the user's entry and converting it to minutes since midnight
    int hour, minute, time, i;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time format.");
        return 1;
    }

    time = (hour * 60) + minute;
    
    for (i = 0; i < 8; i++) {
        if (departure[7] - time < 0){
            i = 0;
            break;
        }
        else if (departure[i] - time < 0)
            continue;
        else break;       
    }       
        
    // Converting best_dep and best_arr to the 12 hour format
    int hour_dep = departure[i] / 60;
    int minute_dep = departure[i] % 60;
    int hour_arr = arrival[i] / 60;
    int minute_arr = arrival[i] % 60;
    
    if(hour_dep < 12)
    {
        if (hour_dep == 0)
            hour_dep = 12;
        printf("Closest departure time is: %d:%02d a.m., ", hour_dep, minute_dep);
    }
    else
    {
        if (hour_dep > 12)
            hour_dep -= 12;
        printf("Closest departure time is: %d:%02d p.m., ", hour_dep, minute_dep);
    }

    if(hour_arr < 12)
    {
        if (hour_arr == 0)
            hour_arr = 12;
        printf("arriving at: %d:%02d a.m.\n", hour_arr, minute_arr);
    }
    else
    {
        if (hour_arr > 12)
            hour_arr -= 12;
        printf("arriving at: %d:%02d p.m.\n", hour_arr, minute_arr);
    }

    return 0;
}