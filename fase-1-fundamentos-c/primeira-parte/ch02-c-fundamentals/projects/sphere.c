/* Computes the volume of a sphere with a 10-meter radius */

#include <stdio.h>

#define PI 3.14159265359f
#define SCALE_FACTOR 4.0f / 3.0f

int main(void)
{
    float r = 10;

    printf("The sphere's volume is: %.1f cubic meters\n", SCALE_FACTOR * PI * r * r * r);

    return 0;
}