#include <stdio.h>

void sum_of_rows(int arr[][3], int rows, int cols);

int main()
{
  int arr[2][3] = {{1, 4, 3}, {2, 4, 1}};
  sum_of_rows(arr, 2, 3);
  return 0;
}
void sum_of_rows(int arr[][3], int rows, int cols)
{
  int max_sum = 0;
  int max_row = 0;
  for (int i = 0; i < rows; i++)
  {
    int sum_row = 0;
    for (int j = 0; j < cols; j++)
    {
      sum_row += arr[i][j];
    }
    printf("Sum of row %d is: %d\n", i + 1, sum_row);
    if (sum_row > max_sum)
    {
      max_sum = sum_row;
      max_row = i+1;
    }
  }
  printf("The row with the maximum sum is: %d\nthe sum is : %d", max_row, max_sum);
}