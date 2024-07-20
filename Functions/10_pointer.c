#include <stdio.h>
#include <math.h>
#include <myfunc.h>

int main()
{
    int a = 35;
    int *x = &a;
    *x = 3;
    printf("%p", *x);
    return 0;
}