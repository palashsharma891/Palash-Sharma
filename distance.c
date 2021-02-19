//WAP to find the distance between two point using 4 functions.
#inlcude <stdio.h>
#include <math.h>
float calc(float x1, float y1, float x2, float y2)
{
    float d;
    d = sqrt(((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));
    return(d);
}
float input()
{
    float x1, y1, x2, y2, distance;
    printf(“Enter the x-coordinate for 1st point: “);
    scanf(“%f”, &y1);
    printf(“Enter the x-coordinate for 1st point: “);
    scanf(“%f”, &y1);
    printf(“Enter the x-coordinate for 1st point: “);
    scanf(“%f”, &y1);
    printf(“Enter the x-coordinate for 1st point: “);
    scanf(“%f”, &y1);
    distance = calc(x1, y1, x2, y2);
    printf(“The distance is: %f”, distance);
    return 0;
}
float main()
{
    input();
    return 0;
}
