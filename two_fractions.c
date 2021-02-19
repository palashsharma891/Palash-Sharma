//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>
struct fraction
{
    int x1, y1, x2, y2;
};
void calc(struct fraction f)
{
    int num, denom, i, gcd, x, y;
    num = (f.x1 * f.y2) + (f.x2 * f.y1);
    denom = (f.y1 * f.y2);
    for(i=1; i<=num && i<=denom; ++i)
    {
        if(num % i == 0 && denom % i == 0)
        {
            gcd = i;
        }
    }
    x = num/gcd;
    y = denom/gcd;
    if(y==1)
        printf("The fraction sum is: %d/%d = %d", x, y, x);
    else
        printf("The fraction sum is: %d/%d", num/gcd, denom/gcd);
}
void input()
{
    struct fraction f1;
    printf("Enter the numerator for 1st number: ");
    scanf("%d", &f1.x1);
    printf("Enter the denominator for 1st number: ");
    scanf("%d", &f1.y1);
    printf("Enter the numerator for 2nd number: ");
    scanf("%d", &f1.x2);
    printf("Enter the denominator for 2nd number: ");
    scanf("%d", &f1.y2);
    calc(f1);
}
int main()
{
    input();
    return 0;
}
