#include <stdio.h> 
int power_log(int a, int b)
{
  if (b == 0)
    return 1;
  int x = power_log(a, b / 2);
  if (b % 2 == 0)
    return x * x;
  else
    return x * x * a;
}
int main()
{
  int a, b;
  printf("enter a : ");
  scanf("%d", &a);
  printf("enter b : ");
  scanf("%d", &b);
  int pow = power_log(a, b);
  printf("%d raised to power %d = %d\n", a, b, pow);
  return 0;
}