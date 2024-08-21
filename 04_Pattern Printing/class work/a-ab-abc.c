#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int x, z = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", x = z + 64);
            z++;
        }
        printf("\n");
    }
    return 0;
}