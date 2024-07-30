/*HW : If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int r, s, a;
    printf("enter age of Ram : ");
    scanf("%d", &r);
    printf("enter age of Shyam : ");
    scanf("%d", &s);
    printf("enter age of Ajay : ");
    scanf("%d", &a);
    if (r < s)
    {
        if (r < a)
            printf("Ram is youngest");
        else // a < r
            printf("Ajay is youngest");
    }
    else
    { // s<r
        if (a < s)
            printf("Ajay is youngest");
        else // s < a
            printf("Shyam is youngest");
    }
    return 0;
}