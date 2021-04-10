//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction
{
    int x, y;
};
int gcd(int a, int b)
{
    if(b!=0)
        return gcd(b, a%b);
    else
        return a;
}
int lcm(fraction frac[], int n)
{
    int ans = frac[0].y;
    for(int i = 1;i < n;i++)
    {
        ans = (((frac[i].y * ans))/(gcd(frac[i].y, ans)));
    }
    return ans;
}
fraction input_one(fraction_frac)
{
    printf(“Enter the numerator and denominator”);
    scanf(“%d %d”, &frac.x, frac.y);
    return frac;
}
fraction compute_two(fraction frac1, fraction frac2)
{
    fraction temp;
    int lcm_den = (frac1.y, frac2.y);
    temp.num = (frac1.num * (gcd(frac1.x, lcm_den))) + (frac.num * (gcd(frac2.x, lcm_den)));
    temp.den = lcm_den;
    return temp;
}
fraction display_one(fraction frac)
{
    printf(“Sum of two fractions is: %d/%d”, frac.x, frac.y);
}
fraction input_n(fraction fracs[], int n)
{
    for(i=0;i<n;i++)
    {
        fracs[i] = input_one(frac[i]);
    }
    return fracs[n];
}
fraction compute_n(fraction fracs[], int n)
{
    fraction temp;
    int num_temp, reduced_den;
    temp.den = lcm(fracs, n);
    temp.x = 0;
    for(i=0;i<n;i++)
    {
        num_temp = gcd(fracs[i].y, temp.y);
        if(temp.y == fracs[i].y)
            temp.x += fracs[i].x * 1;
        else
            temp.x += fracs[i].x * num_temp;
    }
    return temp;
}
int display_res(fraction final_frac)
{
    printf(“Sum of fractions is: %d/%d”, final_frac.x, final_frac.y);
    return 0;
}
int main()
{
    int n;
    printf(“Enter the value of n: “);
    scanf(“%d”, &n);
    struct fraction fracs[n];
    fracs[n] = input_n(fracs, n);
    fraction final_frac;
    final_frac = compute_n(fracs, n);
    display_res(final_frac);
    return 0;
}
