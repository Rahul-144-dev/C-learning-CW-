#include <stdio.h>
#include <myfunc.h>
void greet()
{
  printf("good morning\n");
  printf("hello\n");
  return; // end
}
int num(int n1)
{
  int num1;
  printf("enter num1 : ");
  scanf("%d", &num1);
  return num1;
}
int main()
{
  int x, n = num(x);
  printf("value of x : %d", n);
  // printf("%d", min_2(x, y));
  return 0;
}