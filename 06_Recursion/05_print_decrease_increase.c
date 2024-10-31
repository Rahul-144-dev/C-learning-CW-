#include <stdio.h>
void dec_inc(int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  dec_inc(n);
  return 0;
}
void dec_inc(int n)
{
  if (n == 0)
    return;
  printf("%d\n", n);
  dec_inc(n - 1);
  printf("%d\n", n);
  return;
}