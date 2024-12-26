#include <stdio.h>
#include <limits.h>
void main()
{
  int arr[2][3] = {{32, 7, 33}, {12, 9, 5}};
  int max = INT_MIN;
  int min = INT_MAX;
  int max_i = 0, max_j = 0;
  int min_i = 0, min_j = 0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (min > arr[i][j])
      {
        min = arr[i][j];
        max_i = i;
        max_j = j;
      }
      if (max < arr[i][j])
      {
        max = arr[i][j];
        min_i = i;
        min_j = j;
      }
    }
  }
  printf("Max = %d : arr [%d] [%d] \n", max, max_i, max_j);
  printf("Min = %d : arr [%d] [%d] ", min, min_i, min_j);
}