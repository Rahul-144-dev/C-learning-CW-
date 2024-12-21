#include <stdio.h>
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    arr[i] = arr[4 - i];
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}