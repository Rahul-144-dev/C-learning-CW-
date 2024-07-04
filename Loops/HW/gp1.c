/*HW : Display this GP - 100,50,25...upto 'n' terms.*/
#include <stdio.h>
#include <math.h>
int main()
{
    double n, a = 100;
    printf("enter number : ");
    scanf("%lf", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%lf ", a);
        a /= 2;
    }
    return 0;
}