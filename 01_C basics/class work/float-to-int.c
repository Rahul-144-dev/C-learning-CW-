/* Ques : Take float input and print the fractional part of the real number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float d, x;
    printf("enter number : ");
    scanf("%f", &x);
    int n = x;
    d = x - n;
    printf("the fraction%f", d);
    return 0;
}