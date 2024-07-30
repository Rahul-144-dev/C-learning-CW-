/*HW : If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int r, s, a;
    printf("enter the age of ram : ");
    scanf("%d", &r);
    printf("enter the age of shyam : ");
    scanf("%d", &s);
    printf("enter the age of ajay : ");
    scanf("%d", &a);
    if (r < s && r < a)
    {
        printf("the smallest of them is ram");
    }
    if (s < r && s < a)
    {
        printf("the smallest of them is shyam");
    }
    if (a < r && a < s)
    {
        printf("the smallest of them is ajay");
    }
    return 0;
}