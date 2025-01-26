#include <myfunc.h>
int array_sorted(int arr[], int n);
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  if (array_sorted(arr, n))
    printf("Sorted");
  else
    printf("Not Sorted");
  return 0;
}
int array_sorted(int arr[], int n)
{
  if (n == 0 || n == 1)
    return 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return 0;
    }
  }
  return 1;
}