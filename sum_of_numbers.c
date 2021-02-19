//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int input()
{
    int n;
    printf("Enter the number of integers=");
    scanf("%d", &n);
    return n;
}
int calc()
{
    int a[100], i, sum=0, n;
    n = input();
    printf("Enter the nnumbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
}
int print()
{
    int n, sum;
    sum = calc();
    printf("The sum of numbers is: %d", sum);
}
int main()
{
    print();
    return 0;
}
