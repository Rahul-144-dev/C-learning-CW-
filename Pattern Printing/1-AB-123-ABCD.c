#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int a, b, c = 1, d = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("%c ", b = d + 64);
            else
                printf("%d ", j);
            d++;
        }
        printf("\n");
    }
    return 0;
}