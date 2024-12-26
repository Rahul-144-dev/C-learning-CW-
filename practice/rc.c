#include <stdio.h>
int get_rows(int a[3][4])
{
  int r = sizeof(a) / sizeof(a[0]);
  return r;
}
int get_cols(int a[3][4])
{
  int c = sizeof(a[0]) / sizeof(a[0][0]);
  return c;
}
void main()
{
  int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 0, 0, 1}};
  int row = get_rows(arr);
  int col = get_cols(arr);
  printf("r = %d\n", row);
  printf("c = %d\n", col);
}