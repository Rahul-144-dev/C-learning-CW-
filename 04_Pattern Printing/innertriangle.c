#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int nst = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int x = n - 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", x);
            x--;
        }
        nst--;
        printf("\n");
    }
    return 0;
}