#include <stdio.h>
int maze2(int cr, int cc);
int maze(int cr, int cc);
int main()
{
  int r, c;
  printf("enter row : ");
  scanf("%d", &r);
  printf("enter column : ");
  scanf("%d", &c);
  int nows = maze(r, c);
  printf("Number of ways : %d", nows);
  return 0;
}
int maze(int cr, int cc)
{
  if (cr == 1 && cc == 1)
    return 1; // pos = we are at the end
  int right_ways = 0, down_ways = 0;
  if (cr > 1) // pos=
    down_ways = maze(cr - 1, cc);
  if (cc > 1) //
    right_ways = maze(cr, cc - 1);
  return right_ways + down_ways;
}
int maze2(int cr, int cc)
{
  int right_ways = 0, down_ways = 0;
  if (cr == 1 & cc == 1)
    return 1;
  if (cr == 1)
  { // can't go down only right
    right_ways += maze2(cr, cc - 1);
  }
  if (cc == 1)
  { // can't go right only down
    down_ways += maze2(cr - 1, cc);
  }
  if (cr > 1 && cc > 1)
  { // if we are at mid then call both right and down ways
    right_ways += maze2(cr, cc - 1);
    down_ways += maze2(cr - 1, cc);
  }
  int totalWays = right_ways + down_ways;
  return totalWays;
}