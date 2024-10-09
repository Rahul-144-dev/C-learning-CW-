#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int nsp = n - 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= nsp; j++)
    {
      printf("- ");
    }
    nsp--;
    for (int k = 1; k <= i; k++)
    {
      printf("%d ", k);
    }
    int x = i - 1;
    for (int l = 1; l <= i - 1; l++)
    {
      printf("%d ", x);
      x--;
    }
    printf("\n");
  }
  return 0;
}