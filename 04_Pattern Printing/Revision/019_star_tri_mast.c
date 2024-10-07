#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n - 1; j++)
    {
      printf("  ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("x ");
    }
    printf("\n");
  }
  return 0;
}