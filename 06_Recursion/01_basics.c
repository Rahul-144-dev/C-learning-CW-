#include <stdio.h>
int factorial(int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int fact = factorial(n);
  printf("factorial of %d is %d", n, fact);
  return 0;
}
int factorial(int n)
{
  if (n == 1 || n == 0)
    return 1; // base case
  int recAns = n * factorial(n - 1);
  return recAns;
}