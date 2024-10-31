#include <stdio.h>
int main()
{
  int n;
  printf("enter number of rows & columns : ");
  scanf("%d", &n);
  int nol = n, nst = n;
  for (int i = 1; i <= nol; i++)
  {
    for (int i = 1; i <= nst; i++)
    {
      printf("x ");
    }
    printf("\n");
  }
  return 0;
}