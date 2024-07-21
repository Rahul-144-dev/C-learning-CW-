#include <stdio.h>
#include <math.h>
int fibonacci(int num);
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}
int fibonacci(int num)
{
    int n1 = 0, n2 = 1, next = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
            printf("the %dth fibonnaci number is %d\n", i, n1);
        else if (i == 1)
            printf("the %dth fibonnaci number is %d\n", i, n2);
        else
        {
            next = n1 + n2;
            n1 = n2;
            n2 = next;
            printf("the %dth fibonnaci number is %d\n", i, next);
        }
    }
}
