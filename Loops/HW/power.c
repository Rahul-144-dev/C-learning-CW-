#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, power = 1;
    printf("enter the  base : ");
    scanf("%d", &a);
    printf("enter the power : ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        power *= a;
        printf("\n%d raised to the power %d is %d", a, i, power);
    }

    return 0;
}