#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int *b = &a;
    int **c = &b;
    printf("%p\n", &b);
    printf("%p\n", c);
    return 0;
}