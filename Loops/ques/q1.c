/*Ques : WAP to count digits of a given number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    printf("the number of digits are %d", count);
    return 0;
}