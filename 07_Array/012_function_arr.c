#include <stdio.h>
#include <math.h>
void fun(int a[])
{
    a[0] = 12;
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("arr[0] = %d\n", arr[0]);
    fun(arr);
    printf("arr[0] = %d\n", arr[0]);
    return 0;
}