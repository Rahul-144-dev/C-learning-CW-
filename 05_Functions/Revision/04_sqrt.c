#include <stdio.h>
#include <math.h>
int main()
{
  int a, b;
  printf("enter number : ");
  scanf("%d %d", &a, &b);
  // int root = sqrt(a);
  // printf("%d", root);
  int power = pow(a, b);
  printf("%d", power);
  return 0;
}