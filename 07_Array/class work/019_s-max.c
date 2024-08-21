////* "Ques : Find the second largest element in the given Array.
#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
  int arr[9] = {4, 2, 3, 4, 3, 4, 3, 2, 1};
  int max = INT_MIN;
  int smax = INT_MIN;
  for (int i = 0; i <= 8; i++)
  {
    if (arr[i] > max)
    {
      smax = max;
      max = arr[i];
    }
    else if (arr[i] > smax && max != arr[i])
    {
      smax = arr[i];
    }
  }
  printf("max : %d\n", max);
  printf("smax : %d\n", smax);
  return 0;
}