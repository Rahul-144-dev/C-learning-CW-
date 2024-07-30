#include <stdio.h>
#include <math.h>
int main()
{
    int n, a = 1;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a *= 2;
    }
    return 0;
}