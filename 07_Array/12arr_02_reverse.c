// reverse the elements of the array
#include <stdio.h>
int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("enter element No %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  puts("the elements of the array");
  for (int i = 4; i >= 0; i--)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}