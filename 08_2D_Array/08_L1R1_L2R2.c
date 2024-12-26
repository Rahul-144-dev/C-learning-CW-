// HW : Given a matrix 'a' of dimension nx m and 2
// coordinates (r1,c1) and (r2, c2). Return the sum of
// the rectangle from (r1,c1) to (r2, c2).
#include <stdio.h>
void initialize(int a[][5]);
void prt(int a[][5]);
void addtion(int a[][5], int *sum);
void main()
{
  int sum = 0;
  int arr[4][5];
  initialize(arr);
  prt(arr);
  addtion(arr, &sum);
  printf("the sum of Rectangle is : %d", sum);
}
void addtion(int a[][5], int *sum)
{

  for (int i = 0; i < 4 - 1; i++)
  {
    for (int j = 0 + 1; j < 5; j++)
    {
      *sum += a[i][j];
    }
  }
}
void initialize(int a[][5])
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i == 3 || j == 0)
        a[i][j] = 0;
      else
        a[i][j] = 2;
    }
  }
}
void prt(int a[][5])
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", a[i][j]);
    }
    puts("");
  }
}