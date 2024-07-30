#include <stdio.h>
int main()
{
    int num;
    printf("enter number of lines : ");
    scanf("%d", &num);
    int nsp = num / 2, nst = 1, midl = num / 2 + 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("* ");
        }
        if (i < midl)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}