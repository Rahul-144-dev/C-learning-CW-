#include <stdio.h>
int main()
{
  int arr[] = {12, 32, 42, 42, 23, 242, 32};
  int n = sizeof(arr) / 4;
  printf("%d", n);
  return 0;
}