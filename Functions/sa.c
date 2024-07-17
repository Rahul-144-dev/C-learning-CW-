#include <stdio.h>
#include <math.h>
#include <myfunc.h>
int main()
{
    int a, b;
    printf("enter number : ");
    scanf("%d", &a);
    printf("enter number : ");
    scanf("%d", &b);
    printf("%d\n", sum(a, b));
    printf("%d\n", sub(a, b));
    printf("%d\n", mul(a, b));
    printf("%d\n", div(a, b));
    printf("%d\n", fact(a));
    printf("%d\n", ncr(a, b));
    return 0;
}