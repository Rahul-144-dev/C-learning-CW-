#include <stdio.h>
int gcd(int a, int b);
int min(int a, int b);
int main()
{
  int a, b;
  printf("enter a : ");
  scanf("%d", &a);
  printf("enter b : ");
  scanf("%d", &b);
  int hcf = gcd(a, b);
  printf("the GCD of %d and %d is : %d", a, b, hcf);
  return 0;
}
int min(int a, int b)
{
  return (a < b) ? a : b;
}
int gcd(int a, int b)
{
  int hcf;
  for (int i = min(a, b); i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      hcf = i;
      break;
    }
  }
  return hcf;
}