// HW : Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order. (Leetcode - 59)
#include <stdio.h>
/* Global Variable */
int n;
/* Function Declarations */
void get_n();
void array_elements(int arr[n][n]);
void print_array(int arr[n][n]);
// void spiral(int arr[n][n]);
/* Main Function */
int main()
{
  get_n();
  int arr[n][n];
  // array_elements(arr);
  // print_array(arr);
  // puts("");
  // spiral(arr);
  int count = 0, elements = n * n;
  int min_r = 0, min_c = 0, max_r = n - 1, max_c = n - 1;
  while (count < elements)
  {
    for (int j = min_c; j <= max_c && count < elements; j++)
    {
      scanf("%d", &arr[min_r][j]);
      count++;
    }
    min_r++;
    for (int i = min_r; i <= max_r && count < elements; i++)
    {
      scanf("%d", &arr[i][max_c]);
      count++;
    }
    max_c--;
    for (int j = max_c; j >= min_c && count < elements; j--)
    {
      scanf("%d", &arr[max_r][j]);
      count++;
    }
    max_r--;
    for (int i = max_r; i >= min_r && count < elements; i--)
    {
      scanf("%d", &arr[i][min_c]);
      count++;
    }
    min_c++;
  }
  print_array(arr);
  return 0;
}
/* Function Definations */
// void spiral(int arr[n][n])
// {
// }
void print_array(int arr[n][n])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    // puts("");
  }
}
void array_elements(int arr[n][n])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      static int count = 1;
      arr[i][j] = count;
      count++;
    }
  }
}
void get_n()
{
  printf("Enter a Number : ");
  scanf("%d", &n);
}