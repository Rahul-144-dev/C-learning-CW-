#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        int x = i - 1;
        for (int l = 1; l <= i - 1; l++)
        {
            printf("%d ", x);
            x--;
        }
        printf("\n");
    }
    return 0;
}