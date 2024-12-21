// Ques : Find the difference between the sum of
//        elements at even indices to the sum of elements at
//        odd indices.
#include <stdio.h>
int difference(int a, int b);
int main()
{
  int arr[6] = {324, 432, 144, 211, 342, 44};
  int Odd_Index = 0, Even_Index = 0;
  for (int i = 0; i < 10; i++)
  {
    if (i % 2 == 0)
      Even_Index += arr[i];
    else
      Odd_Index += arr[i];
  }
  printf("Even_Index = %d", Even_Index);
  puts("");
  printf("Odd_Index = %d", Odd_Index);
  int diff = difference(Even_Index, Odd_Index);
  puts("");
  printf("The Difference between Odd and Even Indices is : %d", diff);
  return 0;
}
int difference(int a, int b)
{
  if (a > b)
    return a - b;
  else
    return b - a;
}