#include <stdio.h>
int r = 5, c = 6;

void array_elements_initialize(int arr[r][c]);
void print_array(int arr[r][c]);
/* Main Function */
int main()
{
  int count = 0;
  int arr[r][c];
  int total_elements = r * c;
  int min_r = 0, min_c = 0, max_r = r - 1, max_c = c - 1;
  array_elements_initialize(arr);
  print_array(arr);
  puts("");
  while (count < total_elements)
  { // current minimum row from left to right.
    for (int j = min_r; j <= max_c && count < total_elements; j++)
    {
      printf("%d ", arr[min_r][j]);
      count++;
    }
    min_r++;
    // current maximum column from top to bottom.
    for (int i = min_r; i <= max_r && count < total_elements; i++)
    {
      printf("%d ", arr[i][max_c]);
      count++;
    }
    max_c--;
    // current maximum row from right to left.
    for (int j = max_c; j >= min_c && count < total_elements; j--)
    {
      printf("%d ", arr[max_r][j]);
      count++;
    }
    max_r--;
    // current minimum column from bottom to top.
    for (int i = max_r; i >= min_r && count < total_elements; i--)
    {
      printf("%d ", arr[i][min_c]);
      count++;
    }
    min_c++;
  }
  puts("");
  return 0;
}
// void spiral(int arr[r][c])
// {
// }
void array_elements_initialize(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      static int cnt = 1;
      arr[i][j] = cnt;
      cnt++;
    }
  }
}
void print_array(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (arr[i][j] < 10)
        printf("%d  ", arr[i][j]);
      else
      {
        printf("%d ", arr[i][j]);
      }
    }
    puts("");
  }
}