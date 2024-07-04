/*HW : WAP to print sum of all the even digits of a given number.*/
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
        if (rem % 2 == 0)
        {
            sum += rem;
        }
        num /= 10;
    }
    printf("%d", sum);
    

    return 0;
}