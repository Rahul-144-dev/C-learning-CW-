/*HW : Display this GP - upto 'n' terms.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, x = 3;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", x);
        x *= 4;
    }
    return 0;
}