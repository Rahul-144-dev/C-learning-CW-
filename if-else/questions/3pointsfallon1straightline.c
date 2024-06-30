/*Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x1 = 10, x2 = 20, x3 = 30, y1 = 10, y2 = 20, y3 = 30, a, b;
    a = (y2 - y1) / (x2 - x1);
    b = (y3 - y2) / (x3 - x2);
    if (a == b)
        printf("all the three points fall on one straight line%d",a);
    else
        printf("all the three points not fall on one straight line%d",b);
    return 0;
}