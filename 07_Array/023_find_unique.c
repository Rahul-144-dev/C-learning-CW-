#include <stdio.h>
#include <stdbool.h>
void main()
{
  int arr[] = {1, 2, 3, 4, 3, 2, 1};       // Initialize the array with elements
  int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
  for (int i = 0; i < size; i++)
  {                   // Loop through each element in the array
    bool flag = true; // Assume the current element is unique

    for (int j = 0; j < size; j++)
    { // Loop through the array to compare elements
      if (i != j && arr[i] == arr[j])
      {               // If a duplicate is found
        flag = false; // Set flag to false
        break;        // Exit the inner loop
      }
    }
    if (flag)
    {                                               // If the flag is still true, the element is unique
      printf("The unique element is %d\n", arr[i]); // Print the unique element
      break;                                        // Exit the outer loop after finding the first unique element
    }
  }
}