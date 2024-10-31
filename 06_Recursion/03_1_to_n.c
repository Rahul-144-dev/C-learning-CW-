#include <stdio.h>
void incr(int x, int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  incr(1, n);
  return 0;
}
void incr(int x, int n)
{
  if (x > n) 
    return;
  printf("%d\n", x);
  incr(x + 1, n);
}