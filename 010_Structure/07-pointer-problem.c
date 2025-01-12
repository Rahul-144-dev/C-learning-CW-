#include <stdio.h>
typedef int *int_pointer;
/* Main Function */
int main()
{
  int x = 5, y = 7;
  // int *a = &x;
  // int *b = &y;
  int *p = &x, q = y;         // int *p and int q
  int_pointer a = &x, b = &y; // int *a and int *b
  printf("%p\n", a);
  printf("%p", b);
  return 0;
}