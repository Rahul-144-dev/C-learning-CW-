#include <stdio.h>
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 13};
  int x = 20;
  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      for (int k = j + 1; k < 10; k++)
      {
        if (arr[i] + arr[j] + arr[k] == x)
          printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
      }
    }
  }
  return 0;
}