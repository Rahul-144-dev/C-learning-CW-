#include <stdio.h>
void add_10(int a[5][5]);
void prt(int a[5][5]);
void main()
{
  int arr[5][5];
  add_10(arr);
  prt(arr);
}
void add_10(int a[5][5])
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      a[i][j] = 10;
    }
  }
}
void prt(int a[5][5])
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}