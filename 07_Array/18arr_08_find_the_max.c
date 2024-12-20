#include <stdio.h>
int main()
{
  int arr[5] = {-31, -42, -44, -22, -35};
  int max = arr[0];
  for (int i = 0; i < 5; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }
  printf("the max in array is : %d", max);
  return 0;
}