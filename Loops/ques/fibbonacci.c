/*Ques : Print the nth fibonacci number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    int a = 1, b = 1, sum = 1;
    for (int i = 1; i <= num - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("the fibbonacci is %d\n", sum);
    }
    return 0;
}