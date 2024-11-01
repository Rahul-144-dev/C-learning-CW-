#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int sum = 1;
  int a = 1, b = 1;
  for (int i = 1; i <= n - 2; i++)
  {
    sum = a + b;
    a = b;
    b = sum;
    printf("sum = %d\n", sum);
  }
  return 0;
}