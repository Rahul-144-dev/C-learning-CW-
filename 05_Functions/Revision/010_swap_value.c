#include <stdio.h>
void swap(int a, int b)
{
  a = a + b;
  b = a - b;
  a = a - b;
  return;
}
int main()
{
  int a = 2, b = 4;
  // printf("enter number : ");
  // scanf("%d", &a);
  // printf("enter number : ");
  // scanf("%d", &b);
  swap(a, b);
  printf("a=%d\n", a);
  printf("b=%d", b);
  return 0;
}