/*Ques : Print the sum of this series : 1-2+3-4+5-6... upto 'n'.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum = 0;
    printf("enter number : ");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)//Even
    //     {
    //         sum -= i;
    //     }
    //     else//Odd
    //     {
    //         sum += i;
    //     }
    // }
    if (n % 2 == 0)
    {
        sum = -n / 2;
    }
    else
    {
        sum = -n / 2 + n;
    }

    printf("%d", sum);
    return 0;
}