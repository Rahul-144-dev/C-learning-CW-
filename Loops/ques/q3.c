/*Ques : WAP to print reverse of a given number )*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem = 0;
    printf("enter number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = rem * 10;
        rem = rem + (num % 10);
        num /= 10;
    }
    printf("the reverse number is %d", rem);
    return 0;
}