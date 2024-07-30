/*: Display this AP - 4,7,10,13,16.. upto 'n' terms.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, a = 4;
    printf("enter number : ");
    scanf("%d", &n);
    /*4,7,10,13,16...upto 'n' number of terms.*/
    /*use of extra varribles*/
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a += 3;
    }
    return 0;
}