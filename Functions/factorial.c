#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, fac;
    printf("enter number : ");
    scanf("%d", &n);
    fac = factorial(n);
    printf("%d", fac);
    return 0;
}