// Ques : Write a function to calculate the nth fibonacci number using recursion.
#include <stdio.h>
int fibo(int n)
{
  if (n <= 2)
    return 1;
  int recAns = fibo(n - 1) + fibo(n - 2);
  return recAns;
}
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int Ans = fibo(n);
  printf("Ans = %d\n", Ans);
  return 0;
}