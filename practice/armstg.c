#include <stdio.h>
#include <math.h>
int main()
{
  int num, rem, sum = 0, org, arm;
  printf("enter number : ");
  scanf("%d", &num);
  org = num;
  while (num != 0)
  {
    rem = num % 10;
    arm = pow(rem, 3);
    sum = arm + sum;
    num /= 10;
  }
  if (org == sum)
    printf("arm");
  else
    printf("not");
  return 0;
}