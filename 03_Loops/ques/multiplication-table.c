#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    // int x=2;/*why this one thing make my code so slow(because of anitivirus)*/
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d * %d = %d\n", n, i, n * i);
    // }
    for (int i = n; i <= n * 10; i = i + n)
    {
        printf("%d\n", i);
    }
    return 0;
}