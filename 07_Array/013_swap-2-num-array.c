#include <stdio.h>
#include <math.h>
void swap(int xc[]);
int main()
{
    int arr[2];
    printf("enter number 1 : ", arr[0]);
    scanf("%d", &arr[0]);
    printf("enter number 2 : ", arr[1]);
    scanf("%d", &arr[1]);
    swap(arr);
    printf("arr[0] = %d\narr[1] = %d", arr[0], arr[1]);
    return 0;
}
void swap(int xc[])
{
    int temp = xc[0];
    xc[0] = xc[1];
    xc[1] = temp;
    return;
}