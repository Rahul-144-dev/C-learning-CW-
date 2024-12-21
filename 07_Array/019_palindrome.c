#include <stdio.h>
void palin(int arr[], int size)
{
  int i = 0;
  int j = size - 1;
  int isPalin = 1;
  while (i < j)
  {
    if (arr[i] != arr[j])
    {
      isPalin = 0;
      break;
    }
    i++;
    j--;
  }
  if (isPalin)
    printf("The array is a palindrome\n");
  else

    printf("The array is not a palindrome\n");

  return;
}
int main()
{
  int arr[5] = {1, 2, 3, 2, 1};
  palin(arr, 5);
  return 0;
}