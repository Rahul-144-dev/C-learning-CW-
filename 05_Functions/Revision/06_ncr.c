#include <stdio.h>
int factorial(int x);
int nCr(int n, int r);
int main()
{
  int n, r;
  printf("enter N : ");
  scanf("%d", &n);
  printf("enter R : ");
  scanf("%d", &r);
  printf("nCr = %d", nCr(n, r));
  return 0;
}
int factorial(int x)
{
  int fact = 1;
  for (int i = 1; i <= x; i++)
  {
    fact *= i;
  }
  return fact;
}
int nCr(int n, int r)
{
  int ncr = factorial(n) / (factorial(r) * factorial(n - r));
  return ncr;
}