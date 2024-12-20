// Ques : Find the second largest element in the given Array.
#include <stdio.h>
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int max = arr[0];
  int s_max = arr[0];
  for (int i = 0; i < 10; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] != max && s_max < arr[i])
    {
      s_max = arr[i];
    }
  }
  printf("%d", max);
  puts("");
  printf("%d", s_max);
  return 0;
}