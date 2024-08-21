#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int power = pow(n, 2);
    printf("the square of %d is -> %d\n& ", n, power);
    int root = sqrt(power);
    printf("the square root of %d is -> %d", power, root);
    return 0;
}
