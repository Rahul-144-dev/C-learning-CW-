#include <stdio.h>
int row, col;
// void input_array(int arr[row][col]);
void input_rc(int *row, int *col);
void input_2d(int array[row][col]);
void print_array(int arr[row][col]);
// void print_size(int (*arr)[row][col]);
// Global Variable
void main()
{
  input_rc(&row, &col);
  int arr[row][col];
  input_2d(arr);
  print_array(arr);
  return;
}
void input_rc(int *row, int *col)
{
  printf("Enter Row : ");
  scanf("%d", row);
  printf("Enter Col : ");
  scanf("%d", col);
}
void input_2d(int array[row][col])
{
  for (int i = 0; i < row; i++)
  {
    printf("R%d : ", i + 1);
    for (int j = 0; j < col; j++)
    {
      printf("C%d : ", j + 1);
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