#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("even");
    else
        printf("odd");
    // ternary operator(exp1?exp2:exp3;)
    n % 2 == 0 ? printf("even") : printf("odd");
    return 0; 
}