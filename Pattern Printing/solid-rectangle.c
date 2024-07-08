#include <stdio.h>
int main()
{
    int l, b;
    printf("enter length : ");
    scanf("%d", &l);
    printf("enter bredth : ");
    scanf("%d", &b);
    for (int i = 1; i <= l; i++)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}