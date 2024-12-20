#include <stdio.h>
int main()
{
  int arr[5] = {31, 42, 44, 22, 35};
  int min = arr[0];
  for (int i = 0; i < 5; i++)
  {
    if (min > arr[i])
      min = arr[i];
  }
  printf("the min in array is : %d", min);
  return 0;
}