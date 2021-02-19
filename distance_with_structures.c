//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct distance
{
    float x1, y1, x2, y2;
};
void calc(struct distance d)
{
    float dist;
    dist = sqrt(((d.x2 - d.x1) * (d.x2 - d.x1)) + ((d.y2 - d.y1) * (d.y2 - d.y1)));
    printf("The distance is: %f", dist);
}
void input()
{
    struct distance d1;
    printf("Enter the x-coordinate of 1st point: ");
    scanf("%f", &d1.x1);
    printf("Enter the y-coordinate of 1st point: ");
    scanf("%f", &d1.y1);
    printf("Enter the x-coordinate of 2nd point: ");
    scanf("%f", &d1.x2);
    printf("Enter the y-coordinate of 2nd point: ");
    scanf("%f", &d1.y2);
    calc(d1);
}
