#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) // i=row
    {
        for (int j = 1; j <= num; j++) // j=column
        {
            if (i == 3 || j == 3)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}