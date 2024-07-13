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
int main()
{
    int n, r;
    printf("enter number n : ");
    scanf("%d", &n); // it scans the n and store it to int n;
    printf("enter number r : ");
    scanf("%d", &r);                                 // it scans the r and store it to int r;
    int n_fact = factorial(n);                       // this function gives the factorial of n number
    int r_fact = factorial(r);                       // this function gives the factorial of r number
    int n_r_fact = factorial(n - r);                 // this function gives the factorial of (n-r) number
    int ncr /*!ⁿcᵣ*/ = n_fact / (r_fact * n_r_fact); // ⁿcᵣ->means n-factorial/(r-factorial × n-r's factorial)
    printf("%d", ncr);
    return 0;
}
