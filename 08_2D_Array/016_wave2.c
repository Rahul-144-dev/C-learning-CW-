#include <stdio.h>
/* Main Function */
void print_array(int arr[3][3]);
int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0, k = 3 - 1; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j % 2 == 0)
      {
        int temp = arr[i][j];
        arr[i][j] = arr[k][j];
        arr[k][j] = temp;
        k--;
      }
    }
  }
  print_array(arr);
  // puts("");
  return 0;
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