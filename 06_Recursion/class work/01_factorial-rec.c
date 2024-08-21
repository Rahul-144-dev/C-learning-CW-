#include <stdio.h>
#include <math.h>
// int fact(int n);
int factorial(int n);
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int fac = factorial(n);
    printf("%d", fac);
    return 0;
}
int factorial(int n)
{
    return n * factorial(n - 1);
    // if (n == 1)
    //     return 1;
    // printf("%d\n", factorial);
}
// int fact(int n)
// {
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fac *= i;
//         printf("the factorial of '% d'  is : '%d'\n", i, fac);
// }
//     return fac;
// }
