/* Computes the dimensional weight of a 12"x10"x8" box */

#include <stdio.h>

int main(void)
{
    int height, lenght, width, volume, weight;

    height = 8;
    lenght = 12;
    width = 10;
    volume = height * lenght * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimendional weight (pounds): %d\n", weight);

    return 0;
}