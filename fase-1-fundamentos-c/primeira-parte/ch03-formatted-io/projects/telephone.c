/* Prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx */

#include<stdio.h>

int main(void)
{
    int prefix, first_half, last_half;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix, &first_half, &last_half);
    printf("You entered %d.%d.%d\n", prefix, first_half, last_half);

    return 0;
}