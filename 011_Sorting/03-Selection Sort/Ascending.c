#include <stdio.h>
#include <limits.h>
void print(int arr[], int n);
int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  print(arr, n);
  for (int i = 0; i < n - 1; i++)
  {
    int min = INT_MAX;
    int minidx = 0;
    for (int j = i; j <= n - 1; j++)
    {
      if (min > arr[j])
      {
        min = arr[j];
        minidx = j;
      }
    }

    // Swap the min and the first element of unsorted part
    // swap minIdx and i
    int temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
  }
  puts("");
  print(arr, n);
  return 0;
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
