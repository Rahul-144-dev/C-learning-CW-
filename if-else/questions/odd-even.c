/*Ques : Take positive integer input and tell if it is even or odd*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("this is even number");
    }

    if (n % 2 != 0)
    {
        printf("this is odd number");
    }

    return 0;
}