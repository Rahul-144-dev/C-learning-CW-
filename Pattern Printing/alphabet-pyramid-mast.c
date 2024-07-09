#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int x, z = 1, y = i - 1;
        for (int j = 1; j <= num - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            x = z + 64;
            printf("%c ", x);
            z++;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            x = y + 64;
            printf("%c ", x);
            y--;
        }
        printf("\n");
    }
    return 0;
}