#include <myfunc.h>
int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  puts("");
  for (int i = 1; i <= n - 1; i++)
  {
    bool flag = 1;
    for (int j = 0; j <= n - 1 - i; j++)
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
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}