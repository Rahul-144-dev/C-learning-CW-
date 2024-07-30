/*HW : WAP to print the sum of given number and its reverse.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, rev = 0;
    printf("enter number : ");
    scanf("%d", &num);
    int numb = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = 10 * rev + rem;
        num /= 10;
    }
    printf("%d+%d=%d", numb, rev, numb + rev);
    return 0;
}