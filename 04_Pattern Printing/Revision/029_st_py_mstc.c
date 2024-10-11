#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int nst = n - 1;
  int nsp = 1;
  /*this is for the upper line*/
  for (int x = 1; x <= 2 * n - 1; x++)
  {
    printf("* ");
  }
  printf("\n");
  /*this is for the lower part*/
  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = 1; j <= nst; j++)
    {
      printf("* ");
    }
    for (int k = 1; k <= nsp; k++)
    {
      printf("- ");
    }
    for (int l = 1; l <= nst; l++)
    {
      printf("* ");
    }
    nst--;
    nsp += 2;
    printf("\n");
  }
  return 0;
}