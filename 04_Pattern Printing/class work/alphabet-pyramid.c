#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int x, y = 1;
        for (int j = 1; j <= num - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            x = y + 64;
            printf("%c ", x);
            y++;
        }
        printf("\n");
    }
    return 0;
}