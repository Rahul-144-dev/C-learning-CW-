/*Ques : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater
than its perimeter.*/
/*arear of rectangle=(length × breadth)/(l × b ) */
/*perimeter of rectangle=2(lenthg × breadth)/2(l × b ) */

#include <stdio.h>
#include <math.h>
int main()
{
    int l, b, area, perimeter;
    printf("enter length of the rectangle : ");
    scanf("%d", &l);
    printf("enter breadth of the rectangle : ");
    scanf("%d", &b);
    area = l * b;
    perimeter = 2 * (l * b);
    if (area < perimeter)
    {
        printf(" the area of the rectangle is greather than perimeter %d", area);
    }
    if (area > perimeter)
    {
        printf(" the perimeter of the rectangle is greather than area %d", perimeter);
    }

    return 0;
}