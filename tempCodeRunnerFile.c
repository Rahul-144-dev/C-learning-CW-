#include <stdio.h>

void zero(int brr[], int n);
void find_duplicates(int arr[], int n);

int main()
{
  int arr[] = {6, 1, 7, 3, 2, 5, 4, 8, 9, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int brr[n];
  zero(brr, n); // initialize 0 in brr array
  find_duplicates(arr, n);
  return 0;
}

void zero(int brr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    brr[i] = 0;
  }
}

void find_duplicates(int arr[], int n)
{
  int max_value = 0; // 10
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max_value) // 6,7,8,9,10
    {
      max_value = arr[i]; // 6, 1, 7, 3, 2, 5, 4, 8, 9, 9, 10
    }
  }

  int visited[max_value + 1];   // 10+1=11
  zero(visited, max_value + 1); // visited[]=11

  for (int i = 0; i < n; i++)
  {
    if (visited[arr[i]] == 1)
    {
      printf("Duplicate found: %d\n", arr[i]);
    }
    else
    {
      visited[arr[i]] = 1;
    }
  }
}