#include <stdio.h>
void main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);
  int nst = 1;
  int nsp = n - 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= nsp; j++)
    {
      printf("- ");
    }
    for (int k = 1; k <= nst; k++)
    {
      printf("* ");
    }
    nst = nst + 2;
    nsp--;
    printf("\n");
  }
}