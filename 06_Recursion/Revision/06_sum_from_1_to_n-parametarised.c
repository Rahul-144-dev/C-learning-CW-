#include <stdio.h>
void sum(int n, int s);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  sum(n, 0);
  return 0;
}
void sum(int n, int s)
{
  if (n == 0)
  {
    printf("%d\n", s);
    return;
  }
  sum(n - 1, s + n);
  return;
}