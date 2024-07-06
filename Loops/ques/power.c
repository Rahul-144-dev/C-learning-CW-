/*Ques : Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, power = 1;
    printf("enter the  base : ");
    scanf("%d", &a);
    printf("enter the power : ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    printf("\n%d raised to the power %d is %d", a, b, power);
    return 0;
}