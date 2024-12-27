#include <stdio.h>
// Global Variable
int r;
int c;
void get_dimensions(int arr[][3], int *r, int *c);
void prt(int arr[r][c], int r, int c);
void transpose(int arr[r][c], int brr[c][r]);
int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  get_dimensions(arr, &r, &c);
  int brr[3][2];
  transpose(arr, brr);
  prt(brr, 3, 2);

  return 0;
}
void transpose(int arr[r][c], int brr[c][r])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      brr[j][i] = arr[i][j];
    }
  }
}
void prt(int arr[][2], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[j][i]);
    }
    printf("\n");
  }
}
void get_dimensions(int arr[][3], int *r, int *c)
{
  *r = sizeof(arr) / sizeof(arr[0]);
  *c = sizeof(arr[0]) / sizeof(arr[0][0]);
}