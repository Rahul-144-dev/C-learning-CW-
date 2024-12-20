// Ques : Find the second largest element in the given Array.
#include <stdio.h>
#include <limits.h>
int main()
{
  // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr[7] = {11, 32, 21, 43, 53, 93, 7};
  int max = INT_MIN;
  int s_max = INT_MIN;
  for (int i = 0; i < 7; i++)
  {
    if (max < arr[i])
    {
      s_max = max;
      max = arr[i];
    }
    else if (s_max < arr[i] && max != arr[i])
    {
      s_max = arr[i];
    }
  }
  printf("max = %d", max);
  puts("");
  printf("s_max = %d", s_max);
  return 0;
}