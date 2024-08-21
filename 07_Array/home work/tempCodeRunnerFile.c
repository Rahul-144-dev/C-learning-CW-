// If an array arr contains n elements, then check if the given array is a palindrome or not.
#include <stdio.h>

void palindrome(int arr[], int n);

int main()
{
  int arr[7] = {1, 2, 3, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  palindrome(arr, n);

  return 0;
}

void palindrome(int arr[], int n)
{
  int i = 0;
  int j = n - 1;

  while (i < j)
  {
    if (arr[i] != arr[j])
    {
      printf("The array is not a palindrome.\n");
      return;
    }
    i++;
    j--;
  }

  printf("The array is a palindrome.\n");
}