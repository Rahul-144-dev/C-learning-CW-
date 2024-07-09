#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int x = 1;
        for (int j = 1; j <= num - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            int a = x + 64;
            printf("%c ", a);
            x++;
        }
        printf("\n");
    }
    return 0;
}