#include <stdio.h>
int main()
{
  int arr[5] = {7, 4, 3, 8, 1};
  int product = 1;
  for (int i = 0; i < 5; i++)
  {
    product *= arr[i];
  }
  printf("%d", product);
  return 0;
}