#include <stdio.h>
int sum_matrix(int a[][3], int sum);
void main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int sum = sum_matrix(arr, sum);
  printf("%d", sum);
}
int sum_matrix(int a[][3], int sum)
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum += a[i][j];
    }
  }
  return sum;
}