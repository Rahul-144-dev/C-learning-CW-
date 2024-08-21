#include <stdio.h>
#include <math.h>
int PoW(int base, int exponent);
int main()
{
  int num, rem, sum = 0, org, arm;
  printf("enter number : ");
  scanf("%d", &num);
  org = num;
  while (num != 0)
  {
    rem = num % 10;
    arm = PoW(rem, 3);
    sum = arm + sum;
    num /= 10;
  }
  if (org == sum)
    printf("arm");
  else
    printf("not");
  return 0;
}
int PoW(int base, int exponent)
{
  int result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }
  return result;
}
