#include <stdio.h>

void print_array(int arr[4][3]);

/* Main Function */
int main()
{
  int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  
  // Print the array
  printf("Original array:\n");
  print_array(arr);
  
  // Print columns in reverse order
  printf("Modified array print:\n");
  for (int j = 0; j < 3; j++)
  {
    for (int i = 3; i >= 0; i--)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

void print_array(int arr[4][3])
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}