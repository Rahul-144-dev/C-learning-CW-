#include <stdio.h>
int main()
{
  int a, b;
  printf("enter number : ");
  scanf("%d", &a);
  printf("enter number : ");
  scanf("%d", &b);
  int temp = a;
  a = b;
  b = temp;
  printf("a=%d\n", a);
  printf("b=%d", b);
  return 0;
}