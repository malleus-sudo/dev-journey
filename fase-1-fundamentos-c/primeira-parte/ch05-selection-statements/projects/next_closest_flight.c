/***********************************************************************************************
 * Asks the user to enter a time (expressed in hours and minutes, using the 24-                *
 * hour clock). The program then displays the departure and arrival times for the flight whose *
 * departure time is closest to that entered by the user.                                      * 
 ***********************************************************************************************/

#include <stdio.h>

int main(void)
{
    // List of departure and arrival times in minutes since the midnight
    int dep1 = 480,  arr1 = 616,  // 8:00 a.m.  -> 10:16 a.m.
        dep2 = 583,  arr2 = 712,  // 9:43 a.m.  -> 11:52 a.m.
        dep3 = 679,  arr3 = 811,  // 11:19 a.m. -> 1:31 p.m.
        dep4 = 767,  arr4 = 900,  // 12:47 p.m. -> 3:00 p.m.
        dep5 = 840,  arr5 = 968,  // 2:00 p.m.  -> 4:08 p.m.
        dep6 = 945,  arr6 = 1075, // 3:45 p.m.  -> 5:55 p.m.
        dep7 = 1140, arr7 = 1280, // 7:00 p.m.  -> 9:20 p.m.
        dep8 = 1305, arr8 = 1438; // 9:45 p.m.  -> 11:58 p.m. 

    // Reading the user's entry and converting it to minutes since midnight
    int hour, minute, time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time format.");
        return 1;
    }

    time = (hour * 60) + minute;
    
    // Diferences between time and the departures       
    int d1 = dep1 - time;
    int d2 = dep2 - time;
    int d3 = dep3 - time;
    int d4 = dep4 - time;
    int d5 = dep5 - time;
    int d6 = dep6 - time;
    int d7 = dep7 - time;
    int d8 = dep8 - time;

    // Closest flight variables
    int best_dep, best_arr;

    // First comparing row. Pairs groups of time and excluding any fly that departed already
    int depA, arrA, difA, depB, arrB, difB, depC, arrC, difC, depD, arrD, difD;

    // (a) pair 1-2
    if (d1 < 0 && d2 > 0) // If any flight has already departed, it'll be discarded.
    {
        depA = dep2;
        arrA = arr2;
        difA = d2;
    }
    else
    {
        depA = dep1; // If all the flights have already departed, it'll store the earliest of the group
        arrA = arr1;
        difA = d1;
    }

    // (b) pair 3-4
    if (d3 < 0 && d4 > 0) // If any flight has already departed, it'll be discarded.
    {
        depB = dep4;
        arrB = arr4;
        difB = d4;
    }
    else
    {
        depB = dep3;
        arrB = arr3;
        difB = d3;
    }

    // (c) pair 5-6
   if (d5 < 0 && d6 > 0) // If any flight has already departed, it'll be discarded.
    {
        depC = dep6;
        arrC = arr6;
        difC = d6;
    }
    else
    {
        depC = dep5;
        arrC = arr5;
        difC = d5;
    }

    // (d) pair 7-8
    if (d7 < 0 && d8 > 0) // If any flight has already departed, it'll be discarded.
    {
        depD = dep8;
        arrD = arr8;
        difD = d8;
    }
    else
    {
        depD = dep7;
        arrD = arr7;
        difD = d7;
    }

    // Second row
    int sDep1, sArr1, sDif1, sDep2, sArr2, sDif2;

    // (1) A-B
    if (difA < 0 && difB > 0)
    {
        sDep1 = depB;
        sArr1 = arrB;
        sDif1 = difB;
    }
    else 
    {
        sDep1 = depA;
        sArr1 = arrA;
        sDif1 = difA;
    }
    
    // (2) C-D
    if (difC < 0 && difD > 0)
    {
        sDep2 = depD;
        sArr2 = arrD;
        sDif2 = difD;
    }
    else
    {
        sDep2 = depC;
        sArr2 = arrC;
        sDif2 = difC;
    }
    
    // Final row

    if (sDif1 < 0 && sDif2 > 0)
    {
        best_dep = sDep2;
        best_arr = sArr2;
    }
    else
    {
        best_dep = sDep1;
        best_arr = sArr1;  // If all the flights of the day have already departed, it'll indicate the earliest flight next morning
    }
    
    // Converting best_dep and best_arr to the 12 hour format
    int hour_dep = best_dep / 60;
    int minute_dep = best_dep % 60;
    int hour_arr = best_arr / 60;
    int minute_arr = best_arr % 60;
    
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