/*Ques : Take positive integer input and tell if it is divisible by 5 and 3(Nested if).*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            printf("divisible");
        }
    }
    else
    {
        printf("not divisible");
    }
    return 0;
}