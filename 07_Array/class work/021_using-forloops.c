//.Ques : Write a program to reverse the array without using any extra array.
#include <stdio.h>
void reverse(int arr[]);
int main()
{
  int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  reverse(arr);
  for (int i = 0; i <= 7; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
void reverse(int arr[])
{
  for (int i = 0, j = 7; i < j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++, j--;
    // if (i = j)
    //   break;
  }
  return;
}