#include <stdio.h>
void initialize(int a[][4], int r, int c);
void prt(int a[][4], int r, int c);
int main()
{
  int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 1}};
  int row = 3;
  int col = 4;
  /*
    1 0 1 1
    0 1 0 1
    1 0 0 1
  */
  int max_count = 0;
  int max_idx = 0;
  for (int i = 0; i < row; i++)
  {
    int count = 0;
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == 1)
      {
        count++;
      }
    }
    if (max_count < count)
    {
      max_count = count;
      max_idx = i;
    }
  }
  printf("max 1 = %d : Idx = %d", max_count, max_idx + 1);
  return 0;
}

void prt(int a[][4], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void initialize(int a[][4], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      a[i][j] = (i + j) % 2;
    }
  }
}