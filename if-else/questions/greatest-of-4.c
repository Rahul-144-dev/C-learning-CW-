/**Ques : Take 4 positive integers input and print the greatest of them.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf("enter  third number : ");
    scanf("%d", &c);
    printf("enter  fourth number : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("the greatest of them is a");
    }
    if (b > a && b > c && b > d)
    {
        printf("the greatest of them is b");
    }
    if (c > a && c > b && c > d)
    {
        printf("the greatest of them is c");
    }
    if (d > a && d > b && d > c)
    {
        printf("the greatest of them is d");
    }
    return 0;
}