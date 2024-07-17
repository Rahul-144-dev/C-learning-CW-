#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n, r;
    printf("enter number n : ");
    scanf("%d", &n);
    int nsp = n;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp--;
        for (int j = 0; j <= i; j++)
        {
            int icj = ncr(i, j);
            if (icj >= 10)
                printf("%d", icj);
            else
                printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}
