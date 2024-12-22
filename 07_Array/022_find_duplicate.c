#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 5, 4, 5, 6, 7};
  int n = sizeof(arr) / 4;
  // printf("%d", n);
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        printf("duplicate element %d ", arr[i]);
        break;
      }
    }
  }
  return 0;
}