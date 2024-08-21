/*Ques : Given a point x, y write a program to find out if it lies on the x-axis, y-axis or at the origin, viz.(0,0)*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    printf("enter x : ");
    scanf("%d", &x);
    printf("enter y : ");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("the point is origin");
    }
    else if (x == 0)
        printf("lies on y axis");
    else if (y == 0)
        printf("lies on x axis");
    else
        printf("the point does not lies on x or y axis and not the origin");
    return 0;
}