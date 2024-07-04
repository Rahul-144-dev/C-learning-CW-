/*'Ques : Print the factorial of a given number 'n'.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("%d", product);
    return 0;
}