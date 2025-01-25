#include <stdio.h>
#include <stdbool.h>
void print(int arr[], int n);
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  print(arr, n);
  // Bubble Sort Descending
  for (int i = 1; i <= n - 1; i++)
  {
    bool flag = 1;
    for (int j = n - 1; j >= i; j--)
    {
      if (arr[j] > arr[j - 1])
      {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        flag = 0;
      }
    }
    if (flag)
      break;
  }
  print(arr, n);
  return 0;
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  puts("");
}