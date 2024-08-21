#include <stdio.h>
void palin(int arr[], int n);
int main(void)
{
  int n;
  printf("enter array number : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter element %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  palin(arr, n);
  return 0;
}
void palin(int arr[], int n)
{
  int count = 0;

  for (int i = 0, j = n - 1; i < j; i++, j--)
  {
    if (arr[i] == arr[j])
    {
      count++;
    }
    else
    {
      break;
    }
  }
  if (count == ((n - 1) / 2))
  {
    printf("palindrome");
  }
  else
  {
    printf("not palindrome");
  }
}