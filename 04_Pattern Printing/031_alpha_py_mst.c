#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int nsp = 1;
  int nst = n - 1;
  int x = 65;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    printf("%c ", x);
    x++;
  }
  printf("\n");
  for (int i = 1; i <= n - 1; i++)
  {
    int a = 65;
    for (int j = 1; j <= nst; j++)
    {
      printf("%c ", a);
      a++;
    }
    for (int k = 1; k <= nsp; k++)
    {
      printf("- ");
      a++;
    }
    for (int k = 1; k <= nst; k++)
    {
      printf("%c ", a);
      a++;
    }
    nst--;
    nsp += 2;
    printf("\n");
  }
  return 0;
}