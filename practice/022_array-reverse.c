#include <stdio.h>
void print_array(int arr[]);
void reverse(int arr[], int a, int b);
int main()
{
  int i, j;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("enter index numbers : ");
  scanf("%d %d", &i, &j);
  reverse(arr, i, j);
  print_array(arr);
  return 0;
}
void print_array(int arr[])
{
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
}
void reverse(int arr[], int a, int b)
{
  for (int i = a, j = b; i <= j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}