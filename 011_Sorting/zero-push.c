#include <myfunc.h>
int main()
{
  int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
  int n = size_array(arr);
  int ans[n];
  int idx = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      ans[idx] = arr[i];
      idx++;
    }
  }
  while (idx != n)
  {
    ans[idx] = 0;
    idx++;
  }
  print_Array(ans, n);
  return 0;
}