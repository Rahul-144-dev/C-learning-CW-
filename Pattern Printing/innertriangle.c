// #include <stdio.h>
// int main()
// {
//     int n; // n=4
//     printf("enter number : ");
//     scanf("%d", &n);
//     int a = n-1;
//     for (int i = 1; i <= n; i++)
//     {
//         int x = n - 1;
//         for (int j = 1; j <= a; j++)
//         {
//             printf("%d ", x);
//             x--;
//         }
//         x--;
//         a--;
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int nst = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int x = n - 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", x);
            x--;
        }
        nst--;
        printf("\n");
    }
    return 0;
}
