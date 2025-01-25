#include <stdio.h>
void zero(int brr[], int n);
int main()
{
  int arr[] = {6, 1, 7, 3, 2, 5, 4, 8, 9, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int brr[n];
  zero(brr, n); // initialize 0 in brr array
  // choose a number from arr and that 1 in the index of brr
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == i)
    {
      i = 1;
    }
  }
  return 0;
}
void zero(int brr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    brr[i] = 0;
  }
}