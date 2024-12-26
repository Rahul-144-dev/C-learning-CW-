// addtion_matrix(arr, brr);
#include <stdio.h>
void add_matrix(int arr[2][2], int brr[2][2]);
void addtion_matrix(int arr[2][2], int brr[2][2], int res[2][2]);
void prt_arr(int arr[2][2]);
void main()
{
  int arr[2][2] = {{1, 2}, {3, 4}};
  int brr[2][2] = {{5, 6}, {7, 8}};
  int result[2][2];
  // add_matrix(arr, brr);
  addtion_matrix(arr, brr, result);
  prt_arr(result);
}
void addtion_matrix(int arr[2][2], int brr[2][2], int res[2][2])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      res[i][j] = arr[i][j] + brr[i][j];
    }
  }
}
void add_matrix(int arr[2][2], int brr[2][2])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      arr[i][j] += brr[i][j];
    }
  }
}
void prt_arr(int arr[2][2])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
}