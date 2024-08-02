#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 0;
    printf("enter array number : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        printf("enter arr %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    while (i != n)
    {
        printf("entered array number : %p\n", &arr[i]);
        i++;
    }
    return 0;
}