#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int x = 65;
    for (int j = 1; j <= n - i; j++)
    {
      printf("  ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("%c ", x);
      x++;
    }
    printf("\n");
  }
  return 0;
}