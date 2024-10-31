#include <stdio.h>
int sum(int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int fact = sum(n);
  printf("sum %d\n", fact);
  return 0;
}
int sum(int n)
{
  if (n == 0 || n == 1)
    return 1;
  int fact = n + sum(n - 1);
  return fact;
}