#include <stdio.h>
#include <stdbool.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int x = 2;
  int idx = 0;
  bool flag = 0; // 0 means the element is not present
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == x)
    {
      flag = 1;
      idx = i;
      break;
    }
  }
  if (flag)
    printf("%d is present : index = %d\n", x, idx);
  else
    printf("%d is Not present in the aaray\n", x);
  return 0;
}