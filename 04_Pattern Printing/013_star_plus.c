#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int x = n / 2 + 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == x || j == x)
        printf("x ");
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}