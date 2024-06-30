#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t;
    printf("enter principle : ");
    scanf("%f", &p);
    printf("enter rate of interest : ");
    scanf("%f", &r);
    printf("enter time : ");
    scanf("%f", &t);
    float sim = (p * r * t) / 100;
    printf("simple interset is %f",sim);
    return 0;
}