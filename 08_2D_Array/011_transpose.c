#include <stdio.h>
void prt_arr(int arr[][3], int r, int c);
void prt_brr(int arr[][2], int r, int c);
void transpose(int arr[][3], int r, int c, int brr[][2]);
/* Main Function */
int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int r = sizeof(arr) / sizeof(arr[0]);
  int c = sizeof(arr[0]) / sizeof(arr[0][0]);
  int brr[3][2];
  prt_arr(arr, r, c);
  transpose(arr, r, c, brr);
  prt_brr(brr, c, r);
  return 0;
}
/* Matrix Transpose Function */
/* int arr[][3] = array[no need][size to get dimention] */
void transpose(int arr[][3], int r, int c, int brr[][2])
{
  for (int i = 0; i < c; i++) // c=3
  {
    for (int j = 0; j < r; j++) // r=2
    {
      brr[i][j] = arr[j][i];
    }
  }
}
/* Print Matrix Function */
void prt_arr(int arr[][3], int r, int c)
{
  printf("The Real Matrix\n");
  for (int i = 0; i < r; i++) // r=2
  {
    for (int j = 0; j < c; j++) // c=3
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
void prt_brr(int brr[][2], int r, int c)
{
  printf("The Transpose Matrix\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", brr[i][j]);
    }
    printf("\n");
  }
}