#include <stdio.h>
int main()
{
  int n, r;
  printf("enter N : ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    for (int sp = 1; sp <= n - i; sp++)
    {
      printf(" ");
    }
    int fst = 1;
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", fst);
      fst = fst * (i - j) / (j + 1);
    }
    printf("\n");
  }
  return 0;
}
