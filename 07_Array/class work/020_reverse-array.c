// reverse a array
#include <stdio.h>
int main()
{
  int arr[5] = {1, 2, 3, 4, 5}, brr[5];
  printf("brr[5] = {");
  for (int i = 0; i <= 4; i++)
  {
    brr[i] = arr[4 - i];
    printf("%d,", brr[i]);
  }
  printf("}");
  return 0;
}