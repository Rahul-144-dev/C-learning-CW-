#include <stdio.h>
int main()
{
  int arr[] = {6, 1, 2, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        printf("the duplicate number is  %d", arr[i]);
        break;
      }
    }
  }
  return 0;
}