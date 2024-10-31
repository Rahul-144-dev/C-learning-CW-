#include <stdio.h>
int factorial(int x);
int nCr(int n, int r);
int main()
{
  int n, r;
  printf("enter N : ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    for (int sp = 1; sp <= n - i; sp++)
    {
      printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", nCr(i, j));
    }
    printf("\n");
  }
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