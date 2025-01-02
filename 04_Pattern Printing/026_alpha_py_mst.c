#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int count = 0;
  for (int i = 1; i <= n; i++, count++)
  {
    for (int j = 1; j <= n - i; j++) // spaces print
    {
      printf("- ");
    }
    for (int k = 1; k <= i; k++) // simple number triangle
    {
      printf("%c ", k + 64);
    }
    int x = i - 1;
    for (int l = 1; l <= i - 1; l++) // num trianle with some adjustment
    {
      printf("%c ", x + 64);
      x--;
    }
    printf("\n");
  }
  printf("%d ", count);
  return 0;
}