#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0;
    printf("enter arr number : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter arr number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    printf("the sum of the array elements : %d", sum);
    return 0;
}