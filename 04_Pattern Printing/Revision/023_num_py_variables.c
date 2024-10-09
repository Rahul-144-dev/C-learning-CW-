#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int nst = 1;
  int nsp = n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= nsp; j++)
    {
      printf("  ");
    }
    for (int k = 1; k <= nst; k++)
    {
      printf("%d ", k);
    }
    nst = nst + 2;
    nsp = nsp - 1;
    printf("\n");
  }
  return 0;
}