#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int nsp = 1, nst = n;
    int x = 1, z;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%c ", z = x + 64);
        x++;
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1, b;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c ", b = a + 64);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%c ", b = a + 64);
            a++;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}