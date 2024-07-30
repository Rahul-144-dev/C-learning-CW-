#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int nst = n - 1, nsp = 1, f = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i >= n)
        {
            printf("%d ", f);
            f--;
            if (f == 0)
                break;
        }
        else
        {
            printf("%d ", f);
            f++;
        }
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int e = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", e);
            e++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        int g = n - 1;
        int k = g;
        for (int l = 1; l <= nst; l++)
        {
            printf("%d ", k);
            k--;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}