#include <stdio.h>
#include <math.h>
int gcd(int a, int b);
int min(int a, int b);
int main()
{
    int a, b, min;
    printf("enter number a: ");
    scanf("%d", &a);
    printf("enter number b: ");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("the GCD/HCF of %d & %d is : %d\n", a, b, hcf);
    return 0;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a, b); i >= 1; i--)
    {

        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
        return hcf;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
