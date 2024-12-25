#include <stdio.h>
void print_array(int arr[row][col]);
void input_array(int arr[row][col]);
void input(int array[row][col]);
void print_size(int (*arr)[row][col]);
// Global Variable
int row, col;
void input_rc(int *row, int *col)
{
  printf("Enter Row : ");
  scanf("%d", row);
  printf("Enter Col : ");
  scanf("%d", col);
}
void main()
{
  // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // print_size(&arr);
  // input_array(arr);
  int arr[row][col];
  input_rc(&row, &col);
  input(arr);
  print_array(arr);
  return;
}
void print_array(int arr[row][col])
{
  puts("the elements of the array");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
}
void input(int array[row][col])
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }
}
void input_array(int arr[row][col])
{
  puts("Enter array elements");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
}
void print_size(int (*arr)[row][col])
{
  int size_row = sizeof(arr) / sizeof(arr[0]);
  int size_col = sizeof(arr[0]) / sizeof(arr[0][0]);
  printf("sizeof(arr)       = %d\n", sizeof(arr));       // 24
  printf("sizeof(arr[0])    = %d\n", sizeof(arr[0]));    // 12
  printf("sizeof(arr[0][0]) = %d\n", sizeof(arr[0][0])); // 4
  printf("size_row          = %d\n", size_row);          // 2
  printf("size_col          = %d\n", size_col);          // row
  return;
}