/*Ques : Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("enter the base : ");
    scanf("%d", &a);
    printf("enter the power : ");
    scanf("%d", &b);
    int power = pow(a, b);
    printf("\n%d raised to the power %d is %d", a, b, power);
    return 0;
}