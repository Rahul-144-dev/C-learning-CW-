#include <stdio.h>
#include <math.h>
int main()
{
    float r, a, i;
    printf("enter radius : ");
    scanf("%f", &r);
    float pi = 3.14;
    a = pow(r, 3);
    i = 4 * pi * a / 3;
    printf("volume of the sphere is %f", i);

    return 0;
}