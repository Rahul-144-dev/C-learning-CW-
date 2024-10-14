#include <stdio.h>
int sum_2(int x, int y)
{
  return x + y;
}
int main()
{
  int a, b;
  printf("enter number a : ");
  scanf("%d", &a);
  printf("enter number b : ");
  scanf("%d", &b);
  printf("sum of a & b is %d", sum_2(a, b));
  return 0;
}