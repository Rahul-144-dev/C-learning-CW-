#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4, b, c;
    b = --a;
    c = a--;
    printf("\n%d %d %d", a, b, c);
    return 0;
}