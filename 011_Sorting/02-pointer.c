#include <stdio.h>
void input_num(int *n);
int main()
{
  int target;
  input_num(&target);
  int arr[] = {3, 7, 9, 4, 1, 2, 19, 16};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        printf("%d + %d = %d", arr[i], arr[j], target);
        break;
      }
    }
  }

  return 0;
}
void input_num(int *n)
{
  printf("Enter a target : ");
  scanf("%d", n);
}