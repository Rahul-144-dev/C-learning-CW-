#include <stdio.h>
int stair(int n)
{
  if (n <= 2)
    return n;
  int total_ways = stair(n - 1) + stair(n - 2);
  return total_ways;
}
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int ways = stair(n);
  printf("stairs = %d\n", ways);
  return 0;
}