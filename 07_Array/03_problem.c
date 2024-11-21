// find the index of the elements those are under 35
#include <stdio.h>
int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  puts("the elements those under 35");
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < 35)
      printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}