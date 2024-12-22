#include <stdio.h>
void input(int *st_index, int *end_index)
{ // use to input 2 integer numbers
  printf("Enter index 1 : ");
  scanf("%d", st_index);
  printf("Enter index 2 : ");
  scanf("%d", end_index);
  return;
}
void reverse(int arr[], int si, int ei)
{ // reversing part of array
  for (int i = si, j = ei; i < j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int st_index, end_index;
  input(&st_index, &end_index);      // Function to take user input
  reverse(arr, st_index, end_index); // function to reverse array elements using indices
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}