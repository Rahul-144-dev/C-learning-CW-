#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    // for (int i = n; i <= n * 10; i = i + n)
    // {
    //     printf("%d\n", i);
    // }
    return 0;
}