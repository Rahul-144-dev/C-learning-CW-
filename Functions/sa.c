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
    int facto = sum(a, b);
    printf("%d", facto);
    return 0;
}