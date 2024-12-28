#include <stdio.h>
int r, c;
void get_rc();
void array_initialize(int a[r][c]);
void transpose(int arr[r][c]);
void reverse_array_row(int arr[r][c]);
void print_array(int a[r][c]);
/* Main Function */
int main()
{
  get_rc();
  int arr[r][c];
  array_initialize(arr);
  print_array(arr);
  // Step 1 : Transpose
  transpose(arr);
  // Step 2 : Reverse the rows of the 2d Array
  reverse_array_row(arr);
  puts("");
  print_array(arr);
  puts("Execution Done.........");
  return 0;
}
void reverse_array_row(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0, k = c - 1; j <= k; j++, k--)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[i][k];
      arr[i][k] = temp;
    }
  }
}
void transpose(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = i + 1; j < c; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }
}
void get_rc()
{
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);
}
void array_initialize(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      static int count = 1;
      arr[i][j] = count;
      count++;
    }
  }
}
void print_array(int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}