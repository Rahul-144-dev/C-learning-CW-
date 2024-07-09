#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    int nst = 1, nsp = num - 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            printf("* ");
        }
        nst += 2;
        printf("\n");
    }
    return 0;
}