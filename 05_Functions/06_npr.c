#include <stdio.h>
int factorial(int a);
int nPr(int x, int y);
int main()
{
  int n, r;
  printf("enter n : ");
  scanf("%d", &n);
  printf("enter r : ");
  scanf("%d", &r);
  int npr = nPr(n, r);
  printf("nPr = %d", npr);
  return 0;
}
int factorial(int a)
{
  int fact = 1;
  for (int i = 1; i <= a; i++)
  {
    fact *= i;
  }
  return fact;
}
int nPr(int x, int y)
{
  return factorial(x) / factorial(x - y);
}