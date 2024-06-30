/*Ques : Take 3 positive integers input and print the greatest of them.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);
    if (a > b) // (considerin b can't be greatest)
    {
        if (a > c)
            printf("a is gretest");
        else // c>a
            printf("c is greatest");
    }
    else // b>a(considerin a can't be greatest)
    {
        if (b > c)
            printf("b is gretest");
        else // c>b
            printf("c is gretest");
    }

    return 0;
}