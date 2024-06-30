/*Ques : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    // if (n % 3 == 0 || n % 5 == 0)
    // {
    //     if (n % 15 != 0)
    //     {
    //         printf("divisible");
    //     }
    //     else
    //     {
    //         printf("not divisible");
    //     }
    // }
    if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)
    {
        printf("divisible by 3 or 5 but not 15");
    }
    else
    {
        printf("the number is not matching the required condition");
    }
    // else
    // {
    //     printf("not divisible");
    // }

    return 0;
}
