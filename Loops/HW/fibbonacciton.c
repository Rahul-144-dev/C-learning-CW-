/*HW : Print first 'n' fibonacci numbers.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, a = 0, b = 1, sum = 0;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            printf("the %dth fibbonacci number is %d\n", i, a);
        }
        else if (i == 1)
        {
            printf("the %dth fibbonacci number is %d\n", i, b);
        }
        else
        {
            sum = a + b;
            a = b;
            b = sum;
            printf("the %dth fibbonacci number is %d\n", i, sum);
        }
    }
    return 0;
}