// Homework : Write a program to print the row
// number having the maximum sum in a given
// matrix.
#include <stdio.h>
void sum_of_rows(int a[][3]);
void main()
{
  int arr[2][3] = {{1, 4, 3}, {2, 4, 1}};
  sum_of_rows(arr);
}
void sum_of_rows(int a[][3])
{
  int max_sum = 0;
  int max_row = 0;
  for (int i = 0; i < 2; i++)
  {
    int sum_row = 0;
    for (int j = 0; j < 3; j++)
    {
      sum_row += a[i][j];
    }
    printf("Sum of row %d is: %d\n", i + 1, sum_row);
    if (max_sum < sum_row)
    {
      max_sum = sum_row;
      max_row = i;
    }
  }
  printf("Row = %d : Sum = %d", max_row + 1, max_sum);
}