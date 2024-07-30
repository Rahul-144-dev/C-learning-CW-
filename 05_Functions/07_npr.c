#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int factor = 1;
    for (int i = 1; i <= n; i++)
    {
        factor *= i;
    }
    return factor;
}
int npr(int a, int b)
{
    return fact(a) / fact(a - b);
}
int main()
{
    int n, r;
    printf("enter number : ");
    scanf("%d", &n);
    printf("enter number : ");
    scanf("%d", &r);
    int np = npr(n, r);
    printf("%d", np);
    return 0;
}