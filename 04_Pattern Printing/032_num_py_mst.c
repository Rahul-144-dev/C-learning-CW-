#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int nsp = 1;
  int nst = n - 1;
  int x = 0;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    if (i <= 4)
      x++;
    else
      x--;
    printf("%d ", x);
  }
  printf("\n");
  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      printf("%d ", j);
    }
    for (int k = 1; k <= nsp; k++)
    {
      printf("- ");
    }
    int x = n - i;
    for (int l = 1; l <= nst; l++)
    {
      printf("%d ", x);
      x--;
    }
    nst--;
    nsp += 2;
    printf("\n");
  }
  return 0;
}