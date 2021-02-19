//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int main()
{
    print();
}
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return(sum);
}
int print()
{
    int x, y, z;
    print(“Enter the 1st number “);
    scanf(“%d”, &x);
    printf(“Enter the 2nd number: “);
    scanf(“%d”, &y);
    z = sum(x, y);
    printf(“The sum is: %d”, z);
    return 0;
}
