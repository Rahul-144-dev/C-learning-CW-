// Ques : Count the number of elements in given array
// greater than a given number x.
#include <stdio.h>
int main()
{
  int arr[7] = {33, 14, 31, 13, 21, 12, 21};
  int x = 20;
  int count = 0;
  for (int i = 0; i < 7; i++)
  {
    if (arr[i] > x)
      count++;
  }
  printf("%d", count);
  return 0;
}