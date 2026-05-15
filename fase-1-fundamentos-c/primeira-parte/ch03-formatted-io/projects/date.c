/* reads a date in the format mm/dd/yyyy and displays it in the form yyymmdd */

#include<stdio.h>

int main(void)
{
    int day, month, year;
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %.4d%.2d%.2d", year, month, day);

    return 0;
}