#include <stdio.h>
int stair(int n)
{
  if (n <= 2)
    return n;
  if (n == 3)
    return 4;
  int t_ways = stair(n - 1) + stair(n - 2) + stair(n - 3);
  return t_ways;
}
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int way = stair(n);
  printf("way : %d\n", way);
  return 0;
}