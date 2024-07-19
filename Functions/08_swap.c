#include <stdio.h>
#include <math.h>
#include <myfunc.h>
int main()
{
    int a, b, c;
    printf("enter number a : ");
    scanf("%d", &a);
    printf("enter number b : ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    swap(a, b);
    printf("a==%d\nb==%d", a, b);
    return 0;
}