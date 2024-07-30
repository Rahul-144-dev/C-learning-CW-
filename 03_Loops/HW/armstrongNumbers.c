/* HW : Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal
to the number itself, then the number is called an Armstrong number. For example, 153 = (1*1*1)+(5*5*5)+(3*3*3) */
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, sum = 0, n, arm;
    printf("enter number : ");
    scanf("%d", &num);
    n = num;
    while (num > 0)
    {
        rem = num % 10;
        arm = (rem * rem * rem) + arm;
        num = num / 10;
    }
    if (n == arm)
        printf("arm");
    else
        printf("not");
    return 0;
}
