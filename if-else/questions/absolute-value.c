#include <stdio.h>
#include <math.h>
int main()
{
    int n, s;
    printf("enter number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        // n = n * (-1);
        n*=(-1);
    }
    printf("the absolute value is %d", n);

    return 0;
}