#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    int x = 1;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            x = 0;
        else
            x = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            if (x == 0)
                x = 1;
            else
                x = 0;
        }
        printf("\n");
    }
    return 0;
}