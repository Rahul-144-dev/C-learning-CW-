#include <stdio.h>
int r, c;
void get_rc();
void array_elements(int arr[r][c]);
void reverse_odd_row(int arr[r][c]);
void print_array(int arr[r][c]);
void reverse_odd_row_direct_print(int arr[r][c]);
/* Main Function */
int main()
{
  get_rc();
  int arr[r][c];
  array_elements(arr);
  reverse_odd_row_direct_print(arr);
  // reverse_odd_row(arr);
  // print_array(arr);
  return 0;
}
void reverse_odd_row(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0, k = c - 1; j <= k; j++, k--)
    {
      if (i % 2 != 0)
      {
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
      }
    }
  }
}
void reverse_odd_row_direct_print(int arr[r][c])
{
  puts("array print");
  for (int i = 0; i < r; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = c - 1; j >= 0; j--)
      {
        printf("%d ", arr[i][j]);
      }
    }
    else
    {
      for (int j = 0; j < c; j++)
      {
        printf("%d ", arr[i][j]);
      }
    }
    puts("");
  }
}
void print_array(int arr[r][c])
{
  puts("elements of the array");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
}

void array_elements(int arr[r][c])
{
  puts("enter elements of array");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void get_rc()
{
  printf("Enter Row : ");
  scanf("%d", &r);
  printf("Enter Col : ");
  scanf("%d", &c);
}
