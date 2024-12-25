#include <stdio.h>
// Function prototypes
void print_array(int arr[][100], int row, int col);
void input_array(int arr[][100], int row, int col);
void input_rc(int *row, int *col);

int main()
{
  int row, col;
  input_rc(&row, &col);       // Get the number of rows and columns
  int arr[row][col];          // Declare the array with the specified size
  input_array(arr, row, col); // Input the array elements
  print_array(arr, row, col); // Print the array elements
  return 0;
}
void input_rc(int *row, int *col)
{
  printf("Enter Row: ");
  scanf("%d", row);
  printf("Enter Col: ");
  scanf("%d", col);
}
void input_array(int arr[][100], int row, int col)
{
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void print_array(int arr[][100], int row, int col)
{
  puts("The elements of the array:");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}