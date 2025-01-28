#include <myfunc.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n - 1; i++)
  {
    int max = INT_MIN;
    int maxIdx = 0;
    for (int j = i; j <= n - 1; j++)
    {
      if (max < arr[j])
      {
        max = arr[j];
        maxIdx = j;
      }
    }
    // swap the max element with the first element of unsorted array
    // Swap the minimun index element with the i index
    int temp = arr[maxIdx];
    arr[maxIdx] = arr[i];
    arr[i] = temp;
  }
  print_Array(arr, n);
  return 0;
}
