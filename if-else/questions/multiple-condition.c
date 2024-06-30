#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("this is a 3 digit number");
    }
    else
    {
        printf("it's not a 3 digit number");
    }
    return 0;
}