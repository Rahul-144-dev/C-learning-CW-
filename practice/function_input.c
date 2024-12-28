#include <stdio.h>
// Global Variable
int a;
int b;
// User Defined Function
void get_a()
{
  printf("Enter a : ");
  scanf("%d", &a);
}
void get_b_pointer(int *b)
{
  printf("Enter b : ");
  scanf("%d", b);
}
// Main Function
int main()
{
  get_a();
  get_b_pointer(&b);
  printf("a = %d\n", a);
  printf("b = %d", b);
  return 0;
}