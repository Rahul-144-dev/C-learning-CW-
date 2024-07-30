
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    // more than 80->A
    // more than 60->B
    // more than 40->C
    // less than 40->D
    if (n > 80)
        printf("A");
    else if (n > 60)
        printf("B");
    else if (n > 40)
        printf("C");
    else if (n <= 40)
        printf("D");
    // if (n > 80)
    // {
    //     printf("A");
    // }
    // else
    // {
    //     if (n > 60)
    //         printf("B");
    //     else
    //     {
    //         if (n > 40)
    //             printf("C");
    //         else
    //         {
    //             printf("D");
    //         }
    //     }
    // }
    return 0;
}