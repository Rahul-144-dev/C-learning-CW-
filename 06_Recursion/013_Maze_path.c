#include <stdio.h>
/*
cr = current row
cc = current column
er = end row
ec = end column
*/
int maze(int cr, int cc, int er, int ec)
{
  int right_ways = 0;
  int down_ways = 0;
  if (cr == er && cc == ec)
  { // if we are in the last row & column
    return 1;
  }
  if (cr == er)
  { // only right_ways call
    right_ways += maze(cr, cc + 1, er, ec);
  }
  if (cc == ec)
  { // only down_ways call
    down_ways += maze(cr + 1, cc, er, ec);
  }
  if (cr < er && cc < ec)
  { // both ways call
    right_ways += maze(cr, cc + 1, er, ec);
    down_ways += maze(cr + 1, cc, er, ec);
  }
  int total_ways = right_ways + down_ways;
}
int main()
{
  int row, col;
  printf("enter number of rows : ");
  scanf("%d", &row);
  printf("enter number of columns : ");
  scanf("%d", &col);
  int noOfWays = maze(1, 1, row, col);
  printf("Number of ways : %d", noOfWays);
  return 0;
}