#include <myfunc.h>
int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  int n = size_array(arr);
  for (int i = 0; i <= n - 1; i++)
  {
    int min = INT_MAX;
    int minIdx = 0;
    for (int j = i; j <= n - 1; j++)
    {
      if (min > arr[j])
      {
        min = arr[j];
        minIdx = j;
      }
    }
    int temp = arr[minIdx];
    arr[minIdx] = arr[i];
    arr[i] = temp;
  }
  print_Array(arr, n);
  return 0;
}