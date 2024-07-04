/*Ques : WAP to print sum of digits of a given number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem;
    printf("enter number : ");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("%d", sum);

    return 0;
}