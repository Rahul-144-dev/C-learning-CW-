#include <stdio.h>
int n; // Global variable
void set_global_n();
void print_array(int arr[][n], int r, int c);
void initialize_array(int arr[][n], int r, int c);
void transpose_in_place(int arr[][n], int r, int c);
/* Main Function */
int main()
{
  set_global_n(); // Set the value of global variable n
  int arr[n][n];
  initialize_array(arr, n, n);
  print_array(arr, n, n);
  /* swap arr[i][j] = arr[j][i] */
  /* Transpose Array */
  transpose_in_place(arr, n, n);
  puts("");
  print_array(arr, n, n);
  return 0;
}
void set_global_n()
{
  printf("Enter the value of n: ");
  scanf("%d", &n);
}
void transpose_in_place(int arr[][4], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }
}
void initialize_array(int arr[][4], int r, int c)
{
  // int count = 1;
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
void print_array(int arr[][4], int r, int c)
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