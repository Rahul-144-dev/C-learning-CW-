#include <stdio.h>
void reverse(int arr[], int a, int b);
int main()
{
  int n = 10;
  int i, j;
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("enter index numbers : \n");
  scanf("%d %d", &i, &j);
  int k = 3;
  // steps
  k = k % n;
  reverse(arr, 0, j);
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
void reverse(int arr[], int a, int b)
{
  for (int i = a, j = b; i <= j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return;
}