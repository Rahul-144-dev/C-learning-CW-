#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncrf(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n, r;
    printf("enter number n : ");
    scanf("%d", &n);
    printf("enter number r : ");
    scanf("%d", &r);
    int ncr /*!ⁿcᵣ*/ = ncrf(n, r); // ⁿcᵣ->means n-factorial/(r-factorial × n-r's factorial)
    printf("%d", ncr);
    return 0;
}
