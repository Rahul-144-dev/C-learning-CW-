#include <stdio.h>
#include <math.h>
// #include <myfunc.h>
void swap(int *x, int *y); /// declaration
int main()
{
    int a, b;
    printf("enter number a : ");
    scanf("%d", &a);
    printf("enter number b : ");
    scanf("%d", &b);
    swap(&a, &b); /// function call
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    return 0;
}
void swap(int *x, int *y) /// function defination
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}