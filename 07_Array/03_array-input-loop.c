#include <stdio.h>
#include <math.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}