#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not-divisible");
    }
    return 0;
}