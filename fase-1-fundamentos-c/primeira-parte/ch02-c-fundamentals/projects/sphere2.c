/* Prompts the user for a radius and computes the volume of the sphere. */

#include <stdio.h>

#define PI 3.13159265359f
#define SCALE_FACTOR 4.0f / 3.0f

int main(void)
{
    float r;

    printf("This program computes the volume of a sphere.\n\n");
    
    printf("Enter a radius: ");
    scanf("%f", &r);

    printf("The volume is: %.1f cubic meters\n", SCALE_FACTOR * PI * r * r * r);

    return 0;
}