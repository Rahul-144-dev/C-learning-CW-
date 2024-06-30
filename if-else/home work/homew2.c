/* Ques : Take positive integer input and tell if it is divisible by 5 and 3. */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n % 15 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
    return 0;
}