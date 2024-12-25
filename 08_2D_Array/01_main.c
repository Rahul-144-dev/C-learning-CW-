#include <stdio.h>
void print_array(int arr[2][3]);
void print_size(int (*arr)[2][3]);
void main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  print_size(&arr);
  // print_array(arr);
  return;
}
void print_array(int arr[2][3])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
}
void print_size(int (*arr)[2][3])
{
  int size_row = sizeof(arr) / sizeof(arr[0]);
  int size_col = sizeof(arr[0]) / sizeof(arr[0][0]);
  printf("sizeof(arr)       = %d\n", sizeof(arr));       // 24
  printf("sizeof(arr[0])    = %d\n", sizeof(arr[0]));    // 12
  printf("sizeof(arr[0][0]) = %d\n", sizeof(arr[0][0])); // 4
  printf("size_row          = %d\n", size_row);          // 2
  printf("size_col          = %d\n", size_col);          // 3
  return;
}