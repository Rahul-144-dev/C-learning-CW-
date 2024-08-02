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
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
