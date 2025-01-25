#include <stdio.h>
int main()
{
  int arr[] = {6, 1, 7, 3, 2, 5, 4, 8, 1, 9, 10};
  int x = sizeof(arr) / sizeof(arr[0]);
  int n = x - 1;
  int sum = n * (n + 1) / 2;
  int elements_sum;
  for (int i = 0; i < x; i++)
  {
    elements_sum += arr[i];
  }
  printf("the duplicate : %d", elements_sum - sum);
  // if (elements_sum > sum)
  //   printf("the duplicate : %d", elements_sum - sum);
  // else
  //   printf("the duplicate : %d", sum - elements_sum);
  return 0;
}