/* HW : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
(Considering leap year occurs after every 4 years) */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter year : ");
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not-leap year");
    }
    return 0;
}