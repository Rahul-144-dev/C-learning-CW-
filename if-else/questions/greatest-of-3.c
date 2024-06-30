/**Ques : Take 3 positive integers input and print the greatest of them.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf("enter  third number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("the greatest of them is a");
    }
    if (b > a && b > c)
    {
        printf("the greatest of them is b");
    }
    if (c > a && c > b)
    {
        printf("the greatest of them is c");
    }
    return 0;
}