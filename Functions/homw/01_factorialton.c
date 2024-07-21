#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto *= i;
        printf("the factorial of %d is : %d\n", i, facto);
    }
    return facto;
}
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    fact(n);
    return 0;
}