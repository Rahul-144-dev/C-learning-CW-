void swap(int a, int b)
{
    int c = a;
    b = a;
    a = b;
    return;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("enter number a : ");
    scanf("%d", &a);
    printf("enter number b : ");
    scanf("%d", &b);
    swap(a, b);
    printf("a=%d\n", a);
    printf("b=%d", b);
    return 0;
}