/*Ques : Take 3 numbers input and tell if they can be the sides of a triangle.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter first side : ");
    scanf("%d", &a);
    printf("enter second side : ");
    scanf("%d", &b);
    printf("enter third side : ");
    scanf("%d", &c);
    if (a + b + c == 180 && (a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("this is a triangle");
    }
    else
    {
        printf("this is not a triangle");
    }
    return 0;
}