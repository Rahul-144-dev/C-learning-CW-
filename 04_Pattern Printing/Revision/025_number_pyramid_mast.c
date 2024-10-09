#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++) // spaces
    {
      printf("- ");
    }
    for (int k = 1; k <= i; k++) // nums
    {
      printf("%d ", k);
    }
    int x = i - 1; // extra nums
    for (int k = 1; k <= i - 1; k++)
    {
      printf("%d ", x);
      x--;
    }
    printf("\n");
  }
  return 0;
}