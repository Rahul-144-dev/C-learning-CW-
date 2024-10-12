#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int min = 0;
  for (int i = 1; i <= 2 * n - 1; i++) // Outer Loop
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      int a = i;
      if (i > n)
        a = 2 * n - i;
      int b = j;
      if (j > n)
        b = 2 * n - j;
      min = (a < b) ? a : b; // minimum of 2 numbers
      printf("%d ", n + 1 - min);
    }
    printf("\n");
  }
  return 0;
}