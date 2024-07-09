#include <stdio.h>
int main()
{
    int a, r, c;
    printf("enter area : ");
    scanf("%d", &a);
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == r || j == c)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}