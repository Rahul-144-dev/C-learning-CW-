#include <myfunc.h>
void swap(int *a, int *b);
int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  int n = size_array(arr);
  for (int i = 1; i <= n - 1; i++)
  {
    int j = i;
    while (j >= 1 && arr[j] < arr[j - 1])
    {
      swap(&arr[j], &arr[j - 1]);
      j--;
    }
  }
  print_Array(arr, n);
  return 0;
}
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// #include <stdio.h>

// // Macro to calculate the size of an array
// #define size_array(arr) (sizeof(arr) / sizeof((arr)[0]))

// // Function to print the elements of an array
// void print_Array(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
// }
// Function to swap two elements
// void swap(int *a, int *b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }
// int main()
// {
//   int arr[] = {5, 4, 3, 2, 1};
//   int n = size_array(arr);

//   for (int i = 1; i < n; i++)
//   {
//     int j = i;
//     while (j > 0 && arr[j] < arr[j - 1])
//     {
//       swap(&arr[j], &arr[j - 1]);
//       j--;
//     }
//   }
//   print_Array(arr, n);
//   return 0;
// }