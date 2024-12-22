#include <stdio.h>
void rotate(int arr[], int n, int k);
void print_arr(int array[], int n);
void reverse(int arr[], int si, int ei);
int main()
{
  int n, k;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the value of k: ");
  scanf("%d", &k);
  rotate(arr, n, k);
  print_arr(arr, n);
  return 0;
}
void reverse(int arr[], int si, int ei)
{
  for (int i = si, j = ei; i < j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}
void print_arr(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}
void rotate(int arr[], int n, int k)
{
  k = k % n; // Handle cases where k >= n
  reverse(arr, 0, n - 1);
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
}
