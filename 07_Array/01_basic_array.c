#include <stdio.h>
#include <math.h>
int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    arr[0] = 32;
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[3] = %d\n", arr[3]);
    arr[4] = 98;
    printf("arr[4] = %d\n", arr[4]);
    return 0;
}