#include <stdio.h>
/* Main Function */
void reverse_even_column_direct_print(int arr[3][3]);
void reverse_even_column(int arr[3][3]);
void print_array(int arr[3][3]);
int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // reverse_even_column_direct_print(arr);
  print_array(arr);
  puts("");
  reverse_even_column(arr);
  print_array(arr);
  return 0;
}
void reverse_even_column(int arr[3][3])
{
  for (int j = 0; j < 3; j++)
  {
    if (j % 2 == 0)
    {
      for (int i = 0, k = 3 - 1; i <= k; i++, k--)
      {
        int temp = arr[i][j];
        arr[i][j] = arr[k][j];
        arr[k][j] = temp;
      }
    }
  }
}
void reverse_even_column_direct_print(int arr[3][3])
{
  for (int j = 0; j < 3; j++)
  {
    if (j % 2 == 0)
    {
      for (int i = 3 - 1; i >= 0; i--)
      {
        printf("%d ", arr[i][j]);
      }
    }
    else
    {
      for (int i = 0; i < 3; i++)
      {
        printf("%d ", arr[i][j]);
      }
    }
    puts("");
  }
}
void print_array(int arr[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
}