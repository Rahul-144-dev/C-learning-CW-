#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int a = 1;
        for (int j = 1; j <= num; j++)
        {
            int x = a + 64;
            printf("%c ", x);
            a++;
        }
        printf("\n");
    }
    return 0;
}