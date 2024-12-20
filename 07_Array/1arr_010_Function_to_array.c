#include <stdio.h>
void fun(int a[])
{
  int temp = a[0];
  a[0] = a[1];
  a[1] = temp;
}
int main()
{
  int arr[2] = {3, 1};
  fun(arr);
  for (int i = 0; i < 2; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}