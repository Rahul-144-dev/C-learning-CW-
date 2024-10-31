#include <stdio.h>
void dcr(int n);
void greet(int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  dcr(n);
  return 0;
}
void dcr(int n)
{
  if (n == 0)
    return;
  printf("%d\n", n);
  dcr(n - 1);
  return;
}
void greet(int n)
{
  if (n == 0)
    return;
  printf("good mornig\n");
  greet(n - 1);
  return;
}