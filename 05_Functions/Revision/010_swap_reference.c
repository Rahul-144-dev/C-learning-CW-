#include <stdio.h>
void swap(int *x, int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
  return;
}
void swap_ex(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
  return;
}
int main()
{
  int a = 3;
  int b = 5;
  swap_ex(&a, &b);
  printf("a=%d\n", a);
  printf("b=%d", b);
  return 0;
}