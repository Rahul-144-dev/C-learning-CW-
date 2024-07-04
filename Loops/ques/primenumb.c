/* WAP to check if a number is prime or not */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, a = 0;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            a++;
    }
    if (n == 1 || n == 0)
        printf("niether prime nor composite");
    else if (a == 0)
        printf("prime");
    else
        printf("composite");
    return 0;
}