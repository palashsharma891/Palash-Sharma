//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float calc(float h, float d, float b)
{
    float v;
    v = ((0.33) * ((h*d)+d))/b);
    return(v);
}
float input()
{
    float x, y, z, volume;
    printf(“Enter the value of h: “);
    scanf(“%f”, &x);
    printf(“Enter the value of d: “);
    scanf(“%f”, &y);
    printf(“Enter the value of b: “);
    scanf(“%f”, &z);
    volume = calc(x, y, z);
    printf(“The volume is: %f”, volume);
    return 0;
}
