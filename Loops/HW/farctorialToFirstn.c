/*HW : Print the factorials of first 'n' numbers*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
        printf("the factorial of the number %d is = %d\n",i, sum);
    }
    return 0;
}