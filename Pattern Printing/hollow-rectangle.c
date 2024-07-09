#include <stdio.h>
int main()
{
    int num, r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}