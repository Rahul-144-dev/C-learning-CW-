#include <stdio.h>
#include <math.h>
int main()
{
    int a = 35;
    int *x = &a;
    printf("%d", *x);
    int *e = x;
    return 0;
}