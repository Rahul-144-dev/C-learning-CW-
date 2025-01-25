#include <stdio.h>
#include <stdbool.h>
void print(int arr[], int n);
int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  print(arr, n);
  // Bubble Sort
  for (int i = 1; i <= n - 1; i++) // i denotes NO of passes
  {
    bool flag = 1;                       // Array is not Sorted yet
    for (int j = 0; j <= n - 1 - i; j++) // j using as index
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
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