#include <stdio.h>
#include <math.h>
int main()
{
    int n, product = 1;
    printf("enter array number : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter array element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        product *= arr[i];
    }
    printf("product of array elements : %d ", product);
    return 0;
}