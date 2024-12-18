#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  puts("");
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}