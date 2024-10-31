#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int a = n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= a; j++)
    {
      printf("x ");
    }
    a--;
    printf("\n");
  }
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n + 1 - i; j++)
  //   {
  //     printf("x ");
  //   }
  //   printf("\n");
  // }
  return 0;
}